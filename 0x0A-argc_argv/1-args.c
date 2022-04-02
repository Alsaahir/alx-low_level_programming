#include <stdio.h>

/**
 * main - display num of args
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%d\n", argc);
		}
	}
	return (0);
}
