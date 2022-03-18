#include "main.h"

/**
 * print_line - prints a line n times.
 * @n: integer.
 * return: void.
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar("_");
			n -= 1;
		}
		_putchar("\n");
	}
	else
	{
		_putchar("\n");
	}
}
