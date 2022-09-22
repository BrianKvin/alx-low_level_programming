#include "main.h"
/**
 * *_strcat- function that concatenates two strings
 * @dest: string that will be appended
 * @src: string that will be concatenated upon
 * Return:returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}