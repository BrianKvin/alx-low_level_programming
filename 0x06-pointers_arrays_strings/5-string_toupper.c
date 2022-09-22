#include "main.h"

/**
 * *string_toupper - changes all lower case letters to uppercase
 * @s: the string to change
 * Return: address to string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
