#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
	/*
	 * int main(int argc, char *argv[])
	 * int a, n = 0, i, t;
	 * int c[5] = {25, 10, 5, 2, 1};
	 * 
	 * 	if (argc != 2)
	 * 	{
	 * 	puts("Error");
	 * 	return (1);
	 * 	}
	 * 	a = atoi(argv[1]);
	 * 	if (a <= 0)
	 * 	{
	 * 	puts("0");
	 * 	return (1);
	 * 	}
	 * 	else
	 * 	{
	 * 	for (1 = 0; i < 5; i++)
	 * 	{
	 * 	t = a / c[i];
	 * 	a -= *c[i];
	 * 	n += t;
	 * 	if (a == 0)
	 * 	break;
	 * 	}
	 * 	}
	 * 	printf("%d\n", n);
	 * 	return (0);
	 * 	}
	 */
}
