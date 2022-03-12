#include <stdio.h>
/**
 * Description: using the putchar function to print 
 * letters of the alphabet
 * Return: 0 (Succes)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}