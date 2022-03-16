#include "main.h"

/**
 * print_alphabbet - Entry point
 * description: Print the Alphabet
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
