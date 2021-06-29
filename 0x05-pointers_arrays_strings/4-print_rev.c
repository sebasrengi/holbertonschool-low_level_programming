#include "holberton.h"

/**
 * print_rev - prints a string in stdout in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
while (*s)
{
*s++;
}
while (*s)
{
_putchar (*s--);
}
_putchar('\n');
}
