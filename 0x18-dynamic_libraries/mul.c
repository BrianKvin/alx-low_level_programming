#include <stdio.h>
int mul(num1, num2)
{
	int num1, num2, mul;

	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);
	mul = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, mul);
	return (0);
}
