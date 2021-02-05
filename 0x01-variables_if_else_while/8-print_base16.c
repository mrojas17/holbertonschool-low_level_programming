#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Numb;
	char l;

	for (Numb = 0; Numb < 10; Numb++)
	{
		putchar(Numb + '0');
	}

	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}

	putchar('\n');
	return (0);
}
