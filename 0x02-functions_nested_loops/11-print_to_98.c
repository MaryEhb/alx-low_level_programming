#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start number
 * Return: 0
 */

void print_to_98(int n)
{
	int step = 1;

	if (n > 98)
		step = -1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += step;
	}

	printf("98\n");
}

