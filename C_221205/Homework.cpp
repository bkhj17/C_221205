#include "Homework.h"
#include <stdlib.h>
#include <time.h>

const char* name[] = {"가위", "바위", "보" };

void Homework::Run()
{
	int player, com;
	do {
		printf("가위(1) 바위(2) 보(3)!\n");
		printf("-> ");
		scanf_s("%d", &player);

		if (player < 1 || player > 3) {
			printf("가위는 1이고 바위는 2, 보는 3이라고요... 다시!\n\n");
		}
	} while (player < 1 || player > 3);
	player--;
	int mx = 2, mn = 0;
	com = rand() % (mx - mn + 1) + mn;
	printf("플레이어 : %s\n", name[player]);
	printf("컴퓨터 : %s\n", name[com]);

	//player-com
	//승 1 || -2
	//무 0
	//패 2 || -1

	switch (player - com) {
	case 1: case -2:
		printf("승리하셨습니다!\n");
		break;
	case 0:
		printf("무승부\n");
		break;
	case 2: case -1:
		printf("패배하셨군요...\n");
		break;
	default:
		break;
	}
}
