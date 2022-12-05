#include "Conditional.h"
#include <stdlib.h>
#include <time.h>
void Conditional::Run()
{
	srand((unsigned int)time(NULL));	//랜덤 시드 (시간 -> 강제로 uint)

	int mx = 2, mn = 0;
	int randomNum = rand()%(mx-mn+1) + mn;

	printf("Random : %d\n", randomNum);

	//if(조건) { 실행 } => 조건이 참이면 실행
	if (randomNum == 0) 
	{
		printf("Random = 0\n");
	}
	else if(randomNum == 1) 
	{
		printf("Random = 1\n");
	}
	else if(randomNum == 2)
	{
		printf("Random = 2\n");
	}

	//switch(변수) { case ~: ... default: }
	switch (randomNum)
	{
	case 0:
		printf("Random = 0\n");
		break;
	case 1:
		printf("Random = 1\n");
		break;
	case 2:
		printf("Random = 2\n");
		break;
	default:
		break;
	}
}
