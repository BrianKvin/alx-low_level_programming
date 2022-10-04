#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: strage char
 * Return: NULL if size is zero or if it fails
 * pointer o array if everytging is normal
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) *size);
	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
