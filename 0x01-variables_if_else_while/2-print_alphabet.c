#include <stdio.h>
/**
 * main -print a letter of the aplhabet
 *
 * Description: print letters of the alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
