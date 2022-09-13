#include "main.h"
/**
 * main - entry point 
 * print_alphabet - print alphabet lowercase
 * Return: always 0
 */

void print_alphabet(void)
{
	char alpabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
