#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers to 14
 * Return: nothing
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; ch < 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch >= 10)
		{
				_putchar((ch / 10) + '0');
		}
		putchar((ch % 10) + '0');
	}
}
