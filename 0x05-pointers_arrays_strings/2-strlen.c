#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - give the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int c;
	s[10] = "Holberton!";

	for (c = 0; s[c]; s++)
	{
		c++;
	}
	return (c);
}
