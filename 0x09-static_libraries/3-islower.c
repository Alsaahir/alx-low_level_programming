#include "main.h"

/**
 * _islower - Entry point
 * Description: check if character is lowercase
 * Return: Always 0.
 * @c: holds the character under evaluation
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
