#include "main.h"

/**
 * puts2 - prints only one character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\n')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
			i++
	}
	_putchar('\n');
}
