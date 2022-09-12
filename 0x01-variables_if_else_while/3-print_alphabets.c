#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Description:a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char n = 'a';
	
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar("\n");
	return (0);
}
