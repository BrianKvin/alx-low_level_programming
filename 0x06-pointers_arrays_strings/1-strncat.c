#include "main.h"

/**
 * *_strncat - concatenates two strings and add inputed no of bytes
 * @dest: string that will be appended
 * @src: string that will be concatenated upon
 * @n: amount of bytes used for src
 * Return: returns pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n)
	{
		*(dest + i) = *(src + j);
		{
			if (*(src + j) == '\0')
				break;
			i++;
			j++;
		}
	}
	return (dest);
}
