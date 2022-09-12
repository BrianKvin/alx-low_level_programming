#include <stdio.h>
/**
 * main - Print alphabet in lowercase followed by new line
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative"
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
		putchar('\n');
			return (0);
}
