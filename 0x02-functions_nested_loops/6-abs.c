#include <stdlib.h>
#include "main.h"

/**
 * _abs - Prints absolute value
 * @n: number to be converted
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

