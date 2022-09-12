#include <stdio.h>
/**
 * main - positive anything is better than nothing
 * Describe: print positive, zero, or negative numbers
 * this progrm prints positive, zero or negative numbers
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%i", i);
	}
	putchar("\n");
	return (0);
}
