#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declaration of variables*/
	int count = 0;

	if (argc > 0)
	{
		/*while - print each argument*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
