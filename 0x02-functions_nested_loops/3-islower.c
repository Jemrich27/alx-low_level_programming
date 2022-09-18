#include <ctype.h>
#include "main.h"
/**
 * _islower - Check if character is lower case
 * @c: character to be evaluated
 *
 * Return: returns 1 if character is lowercase,0if it isnt
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);
	return (0);

}
