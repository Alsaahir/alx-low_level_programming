#include "main.h"

/**
 * _isupper - Check if uppercase
 *
 * @c: integer.
 * return: 0 success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
