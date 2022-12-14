#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to chack against
 * Return: numbe rof bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
		else if (accept[r + 1])
			return (n);
		}
		s++;
	}
	return (n);
}
