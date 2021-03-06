#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * On error, -1 is returned, 
 * and error number is set appropriately
 *
 * return 1: on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
