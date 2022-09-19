#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers
 * @n: the first number to be counted
 *
 * Description: print all natural intergers to 98
 * Return: returns the result of addition
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n > 98; --n)
			printf("%d, ", n);
			printf("%d\n", 98);
	}
	else
	{
		for (n = n; n < 98; ++n)
			printf("%d, ", n);
			printf("%d\n", 98);
	}
}

