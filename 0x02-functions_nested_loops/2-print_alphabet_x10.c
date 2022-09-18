#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in a lower case 10x
 *
 * Return: returns 0 (success)
 */

void print_alpabet_10x(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}
}
