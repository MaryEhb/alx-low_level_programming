#include <stdio.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: arr of pointers
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
