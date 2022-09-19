#include "main.h"
/**
 * print_square - function to print square with #
 * @n: integer value for size of square
 * if @n is 0 or less, new line should be printed
 */
void print_square(int n)
{
	int i;
	int j;

	if (n < 0)
	_putchar('\n');
	else
	{
		for (i = 0 ; i < n; i++)
		{
		for (j = 0; j < n; j++)
			_putchar('#');
			_putchar('\n');
		}

	}

}
