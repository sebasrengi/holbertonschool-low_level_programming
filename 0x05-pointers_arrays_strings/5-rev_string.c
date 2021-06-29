#include "holberton.h"

/**
 * print_rev - prints a string in stdout in reverse
 * @s: string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int o = 0;
 while (*(s + o))
{
o++;
_putchar(*(s + o));
o = o + 1;
i = i - 1;
}
while (i >= 0)
{
_putchar(*(s + i));
i--;
    }
_putchar('\n');
}
