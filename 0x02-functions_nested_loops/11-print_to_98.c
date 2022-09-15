#include <stdio.h>
#include "main.h"
/**
 * print -prints all numbers between 0 and 98
 * numbers separated by comma followed by space
 * @n: The first number to be printed
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n);
			n++;
	}
	else if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n);
			n--;
	}
	printf("98\n");
}
