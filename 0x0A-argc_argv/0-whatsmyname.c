#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to a string
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
