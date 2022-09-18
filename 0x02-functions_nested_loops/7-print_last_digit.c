#include "main.h"
/**
 * print_last_digit - prints last digit of any integer
 *@n: Number last digit is to be printed
 *Return: Returns the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	x *= -1;
	_putchar('0' + x);
	return (x);
}

