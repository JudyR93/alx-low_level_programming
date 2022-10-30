#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets
 *
 * Return: 0
 */
int main(void)
{
    char ch;
    ch = "a";
    while (ch <= "z")
    {
          putchar(ch);
          ch++;
    }
putchar("\n");
return (0);
}
