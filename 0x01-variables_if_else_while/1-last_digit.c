#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the number if it is greater than 5, equal to 0, less than 6 and not 0
 *
 * Description: i am using initial short main funtion
 * this program prints  print the number if it is greater than 5, equal to 0, less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of )"int" is %i and is greater than 5\n, n, l");
	}
	else if (l == 0)
	{
		printf("Last digit of )"int" is %i and is 0\n, n, l");
	}
	else 
	{
		printf("Last digit of )"int" is %i and is less than 6 not 0\n, n, l");
	}
	/**
	 * return: 0 always
	 */
	return (0);
}
