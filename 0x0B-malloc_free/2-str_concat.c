#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, suma, cont = 0, x = 0;
char *array;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
i++;
while (s2[j])
j++;
suma = i + j;
array = malloc((sizeof(char) * suma) +1);
if (array == NULL)
return (NULL);
for (; cont < suma; cont++)
{
if (cont <= i)
array[cont] = s1[cont];
if (cont >= i)
{
array[cont] = s2[x];
x++;
}
}
array[cont] = '\0';
return (array);
}
