#include "main.h"
/**
 * print_diagonal - function to print \ across the screen
 * @n: integer value for number of times \ should be printed
 *
 * if @n is 0 or less, new line should be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		_putchar('\n');
	for (i = 0; i < (n - 1); i++)
	{
		for (j = i; j >= 0; j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	}
}

