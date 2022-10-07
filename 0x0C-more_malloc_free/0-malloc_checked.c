#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * description: funtions that allocates memory using malloc
 * main - check code 
 *
 * return: always 0
 */
int main(void)
{
	char *str;

	str = malloc(sizeof(char) * 3);
	str[0] = 'H';
	str[1] = 'i';
	str[2] = '\0';
	printf("%s\n", str);
	return (0);
}
