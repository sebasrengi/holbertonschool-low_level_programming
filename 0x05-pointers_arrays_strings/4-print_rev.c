#include "holberton.h"

/**
 * print_rev - prints a string in stdout in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{int i = 0;
while (*(s+i))
{  
*s++;
i++;
}
while (i)
{
_putchar (i--);
}
_putchar('\n');
}
