#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @n: string
 * Return: the pointer to dest
 */
char *leet(char *n)
{
	int i, j;
	char A1[] = "aAeEoOtTlL";
	char A2[] = "4433007711";

	for (i = 0; n[1] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == A1[j])
			{
				n[i] = A2[j];
			}
		}
	}
	return (n);
}
