#include <ctype.h>
#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c: character to be evaluated
 * Return: returns 1 if character is lowercase
 * 0 if it isnt
 */

int _isupper(int c)
{
	int i = isupper(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}


}

