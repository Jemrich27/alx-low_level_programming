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
	int count;

	if (n > 98)
	for (count = n; count > 98; --count)
		printf("%d, ", count);
	else
	for (count = n; count < 98; ++count)
		printf("%d, ", count);
		printf("98\n");
}

