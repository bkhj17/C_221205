#include "Homework.h"
#include <stdlib.h>
#include <time.h>

const char* name[] = {"����", "����", "��" };

void Homework::Run()
{
	int player, com;
	do {
		printf("����(1) ����(2) ��(3)!\n");
		printf("-> ");
		scanf_s("%d", &player);

		if (player < 1 || player > 3) {
			printf("������ 1�̰� ������ 2, ���� 3�̶���... �ٽ�!\n\n");
		}
	} while (player < 1 || player > 3);
	player--;
	int mx = 2, mn = 0;
	com = rand() % (mx - mn + 1) + mn;
	printf("�÷��̾� : %s\n", name[player]);
	printf("��ǻ�� : %s\n", name[com]);

	//player-com
	//�� 1 || -2
	//�� 0
	//�� 2 || -1

	switch (player - com) {
	case 1: case -2:
		printf("�¸��ϼ̽��ϴ�!\n");
		break;
	case 0:
		printf("���º�\n");
		break;
	case 2: case -1:
		printf("�й��ϼ̱���...\n");
		break;
	default:
		break;
	}
}
