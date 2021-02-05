#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Numb;

	for (Numb = 0; Numb < 100; Numb++)
	{
		putchar(Numb / 10 + '0');
		putchar(Numb % 10 + '0');
		if (Numb !=99)
		{
		putchar(',');
		}
	}

	putchar('\n');
	return (0);
}
