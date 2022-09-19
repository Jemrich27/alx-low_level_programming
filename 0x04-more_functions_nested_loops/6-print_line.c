#include "main.h"
/**
 * print_line - print a straigjt line
 *
 * @n: is the number of times the _ character
 * should be printed
 * if @n is 0 or less, new line should be printed
 */
void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1 ; lnChr <= n; ++lnChr)
			_putchar('_');
			_putchar('\n');
	}
}
