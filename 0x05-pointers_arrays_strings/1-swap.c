#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of  two integers
 * @a: integer a
 * @b: integer b
 *
 * return : void
 */

void swap_int(int *a, int *b)
{
	int constant = *a;
	*a = *b;
	*b = constant;

}
