#include "main.h"
/**
 * print_sign - Print the sign of a number
 *
 * @n: Number sign is to be checked for
 *
 * Return: 1 if sign is positive
 * 0 if sign is zero
 * -1 if sign is negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
