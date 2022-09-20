#include "main.h"
/**
 * _strlen - finds the lenghth of a string.
 * @s: String pointer to the string whos length is to be found.
 * Return: returns the lenghth of the string.
 *
 */
int _strlen(char *s)
{
	int p = 0;
	/*increment up to when last character is NULL, \0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
