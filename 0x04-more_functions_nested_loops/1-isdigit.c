#include "main.h"
/**
 * _isdigit - checks whether a character is a digit between 0 and 9
 * @c: tested character
 * Return: 1 if number is between 0 and 9, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
