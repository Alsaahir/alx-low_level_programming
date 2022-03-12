#include <stdio.h>

/**
 * Description: Print all numbers of base 10, starting from 0.
 * this program uses putchar function to data to the standard output.
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}