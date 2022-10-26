#include "main.h"
#include <stdio.h>

/**
 * _strlen -outputs string length
 * @s : a pointer starting
 *
 * Return: the length
 */
int _strlen(char *s)
{
int len = 0;
while (*s != 0)
{
len++;
s++;
}
return (len);
}
