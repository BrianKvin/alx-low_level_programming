#include <stdio.h>
/**
 * main - main block
 * Description - Computes and prints even numbers < 4000000
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, second = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = second;
		if (second % 2 == 0)
			sum += second;
	}
	printf("%i\n", sum);
	return (0);
}
