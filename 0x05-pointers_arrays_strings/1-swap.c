#include "main.h"
#include <stdio.h>

/**
 * swap_values - function swaps the value of two intergers
 * @p: integer to swap
 * @b: intefer to swap
 */

void swap_values(int *p, int *b)
{
	int n = *p;
	*p = *b;
	*b = n;
}
