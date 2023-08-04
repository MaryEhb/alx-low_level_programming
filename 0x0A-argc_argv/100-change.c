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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		int n = atoi(argv[1]), change = 0;

		change += n / 25;
		n = n % 25;
		change += n / 10;
		n = n % 10;
		change += n / 5;
		n = n % 5;
		change += n / 2;
		n = n % 2;
		change += n;
		printf("%d\n", change);

	}
	return (0);
}
