#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: pointer to the firts integer
 * @b: pointer to the second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int alx;

	alx = *a;
	*a = *b;
	*b = alx;
}
