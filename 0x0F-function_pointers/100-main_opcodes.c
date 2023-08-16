#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: count
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *p = (char *) main;
	int arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	arg = atoi(argv[1]);
	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (arg)
	{
		printf("%.2hhx%s", *p, (arg ? " " : "\n"));
		p++;
		arg--;
	}

	return (0);
}
