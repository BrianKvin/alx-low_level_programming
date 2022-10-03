#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: number of arguments assed to the function
 * @argv: argument vector of pointer to stringsi
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
		/*
		 * for (count = 0; count < argc; count++)
		 * {
		 *  printf("%s\n", argv[count]);
		 * }
		 */
	}
	return (0);
}
