#include <stdlib.h>

#include <time.h>

/**
 * main -Entry
 *
 * Description: checks positive,negative or zero
 *
 * Return: always 0 (success)
*/
/* betty style doc for function main goes there */

int main(void)
{


	int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if (n > 0)
				{
				printf("%d is positive", n);
				}
				elseif(n < 0)
				{
				printf("%d is negative", n);
				}
				else
				{
				printf("%d is zero", n);
				}
				return (0);

}

