#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Desciption: using the initial short main function
 * this program prints "Programming is positive, zero, or neagative"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	/**
	 * return: 0 always
 	 */
	return (0);
}
