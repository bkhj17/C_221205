#include "Operator.h"
#include <stdio.h>

void Operator::Run() {
	//+, -, *, /, %
	int x, y;
	float fx, fy;

	scanf_s("%d%d", &x, &y);
	printf("x : %d, y : %d\n", x, y);
	printf("x+y = %d\n", x + y);
	printf("x-y = %d\n", x - y);
	printf("x*y = %d\n", x * y);
	if (y != 0) {
		printf("x/y = %d\n", x / y);
		printf("x mod y = %d\n", x % y);
	}
	else
		printf("Can't divide by 0\n");
	printf("\n");

	scanf_s("%f %f", &fx, &fy);
	printf("x : %f, y : %f\n", fx, fy);
}