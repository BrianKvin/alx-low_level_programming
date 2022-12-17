#include <stdio.h>
int sub(num1, num2)
{
	int num1, num2, sub;

	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);
	sub = num1 - num2;
	printf("%d - %d = %d\n", num1, num2, sub);
	return (0);
}
