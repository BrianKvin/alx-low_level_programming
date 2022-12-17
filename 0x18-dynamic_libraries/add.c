#include <stdio.h>

int sum(num1, num2)
{
	int num1, num2, sum;

	printf("Enter two intergers: ");
	scanf("%d %d, &num1, &num2");
	sum = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, sum);
	return (0);
}
