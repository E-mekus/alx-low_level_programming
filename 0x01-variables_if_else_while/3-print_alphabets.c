#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Description:a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ch;
	
	for (ch = 'a' ch <= 'z' ch++;)
	{
		putchar(ch);
	}
	for (ch = 'a' ch <= 'Z' ch++;)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
