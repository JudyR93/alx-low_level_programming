#include "main.h"
#include <stdio.h>

/**
 * _puts- prints a string
 * @str: string
 *
 * Return: void
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + 1));
	i++;
	}
	putchar(10);
}
