#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Numb;

	for (Numb = 0; Numb <= 9; Numb++)
	{
		putchar(Numb + '0');
		if (Numb != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
