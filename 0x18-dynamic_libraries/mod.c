#include <stdio.h>
int rem(num1, num2)
{
	int num1, num2, rem;
	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);
	rem = num1 % num2;
	printf("%d % %d = rem\n", num1, num2, rem);
	return (0);
}
