#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
