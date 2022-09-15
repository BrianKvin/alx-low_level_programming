#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -prints all numbers from input to 98,
 * numbers separated by comma followed by space
 * @n: The first number to begin counting from
 * Return: Void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
				printf("%d\n", n);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n++);
				printf("%d\n", n);
	}
}