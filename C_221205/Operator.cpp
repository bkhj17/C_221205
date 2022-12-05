#include "Operator.h"

void Operator::Run() {
	//기본연산자 +, -, *, /, %
	//대입연산자 =, ...
	//비교연산자 ==, !=, >, >=, <, <=
	//논리연산자 &&, ||, &, |, ^
	//비트연산자 >>, <<

	int x = 1, y = 1;
	float fx, fy;
	//int
	scanf_s("%d%d", &x, &y);
	printf("x : %d, y : %d\n", x, y);
	x += y;
	printf("changed. x : %d, y : %d\n", x, y);
	printf("x+y = %d\n", x+y);
	printf("x-y = %d\n", x-y);
	printf("x*y = %d\n", x*y);
	if (y != 0) {
		printf("x/y = %d\n", x/y);
		printf("x mod y = %d\n", x%y);
	}
	else
		printf("Can't divide by 0\n");
	
	printf("\n");
	//float
	scanf_s("%f%f", &fx, &fy);
	printf("x : %f, y : %f\n", fx, fy);
}