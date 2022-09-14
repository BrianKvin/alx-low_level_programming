#include "main.h"
/**
 * printAlpha - prints alphabet in lower case
 *
 * Return: void
 */
void printAlpha(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'c' || i == 'k')
			_putchar(i);
		continue;
	}
	_putchar('\n');
}
