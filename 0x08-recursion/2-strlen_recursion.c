#include "holberton.h"
#include <string.h>
/**
 * _strlen_recursion- length of string
 *@s:char
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit = 1 + _strlen_recursion(s + 1);

	}
	return (longit);
}
