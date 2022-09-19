#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if character is digit
 * @c: character to be evaluated
 *
 * Return: returns 1 if character is lowercase
 * 0 if character is not
 */

int _isdigit(int c)
{
	int i = isdigit(c);

	if (i > 0)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
