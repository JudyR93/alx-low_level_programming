#include "main.h"
#include <stdio.h>

/**
 * _strlen - outputs string length
 * @s : a pointer starting 
 *
 * return : length of string
 */
int _strlen(char *s)
{
   int len;
   while(*s [len] != '\0')
     { 
	len += 1;
	*s = *s + 1;
     }
   printf("%d" , len);
   return(len);
}
