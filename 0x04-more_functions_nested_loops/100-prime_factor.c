#include <stdio.h>

/**
 * main - print largest prime factor
 * Return: 0 success
 */
int main(void)
{
	unsigned long int a, i;

	a = 612852475143;
	for (i = 3; i < (a / 2); i = i + 2)
	{
		while ((a % i == 0) && (a != i))
			a = a / i;
	}
	printf("%lu\n", a);
	return (0);
}
