#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array containing the program command line argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 1; j < argc; j++)
			if (isdigit(argv[i][j]) == 0)
			{
			puts("Error");
			return (1);
			}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
