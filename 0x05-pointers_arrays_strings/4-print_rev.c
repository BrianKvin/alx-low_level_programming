#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	while (s[i] i = '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
