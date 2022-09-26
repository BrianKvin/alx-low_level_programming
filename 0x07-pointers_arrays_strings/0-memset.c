#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer tochar params
 * @b: data to be used
 * @n: index
 * Return: *s (poier to the memory block)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
