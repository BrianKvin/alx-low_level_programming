#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a straight line
 * @n: parameter
 * Return: returns nothing
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		putchar('_');
	}
	putchar('\n');
}
