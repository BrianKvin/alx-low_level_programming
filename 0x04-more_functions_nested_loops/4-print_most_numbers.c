#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 and 9
 * except 2 and 4
 * @i: the first integer
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = o; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}