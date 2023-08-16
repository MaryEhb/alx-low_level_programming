#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of argment passed (name of file counts)
 * @argv: array of arg
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int (*func)(int, int);
	int res;

	if (argc == 4)
	{
		func = get_op_func(argv[2]);
		if (!func)
		{
			printf("Error\n");
			return (0);
		}
		res = func(atoi(argv[1]), atoi(argv[3]));

		printf("%d\n", res);
	}

	return (0);
}
