#include "main.h"

/**
 * swap_int - swaping 2 integer using a pointer
 * @a:integer
 * @b:integer
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
