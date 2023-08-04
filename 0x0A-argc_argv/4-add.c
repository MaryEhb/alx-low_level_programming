#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: count
 * @argv: arr of pointers
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 1, sum = 0, count;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			count = 0;
			while (argv[i][count] != '\0')
			{
				if (!isdigit(argv[i][count]))
				{
					printf("Error\n");
					return (1);
				}
				count++;
			}

			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
