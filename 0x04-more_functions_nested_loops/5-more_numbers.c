#include "main.h"
/**
 * more_numbers - function to print 0-14 ten times
 * use putchar three times
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
