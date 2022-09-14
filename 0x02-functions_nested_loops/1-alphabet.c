#include "main.h"
/**
 * print alphabet in lower case
 *
 * Retirn: o
 */
void printAlphabet(void)
{
	int i;

	for (i = 'a'; i<= 'z'; i++)
	{
		if (i == 'c' || i == 'k')
			_putchar(i);
		continue;
	}
	_putchar('\n');
}
