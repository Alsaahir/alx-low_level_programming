#include <stdio.h>

/**
 * main - display num of args
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
