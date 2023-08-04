#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: arr of pointers
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
