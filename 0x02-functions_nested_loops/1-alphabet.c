#include <unistd.h>
#include "main.h"
/**
 * Print - alphabet - function to print abc
 * Return: 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

