#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * Description: print _putchar
 * return 0: (success)
 */
int main(void)
{
	write(1, "_putchar\n", 8);
	return (0);
}
