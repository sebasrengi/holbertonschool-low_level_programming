#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - give the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{int i= 0;
while(*s==*s){
i++;
*s++;
 }
return (i);
}
