#include "main.h"

/**
 * _isdigit - checks if number.
 * @c: integer.
 * Return: 0 succes.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
