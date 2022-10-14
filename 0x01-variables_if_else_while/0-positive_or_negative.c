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
				printf("%d", n "is positive");
				elseif(n < 0)
				printf("%d", n "is negative");
				else
				printf("%d", n is zero);

					return (0);

}

