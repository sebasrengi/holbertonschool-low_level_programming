#include "holberton.h"
/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
 */
void main (int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (i < j)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
