#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int Numb;

	for (Numb = 0; Numb <= 79; Numb++)
	{
		putchar(Numb / 10 + '0');
		putchar(Numb % 10 + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
