#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Prints the alphabet 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 1;
	while (i <= 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
{
