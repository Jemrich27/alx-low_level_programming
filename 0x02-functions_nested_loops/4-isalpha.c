#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Check if character is alphabet
 *
 * @c: character to be evaluated
 * Return: returns 1 if character is lower case,
 * 0 if it isnt
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}

