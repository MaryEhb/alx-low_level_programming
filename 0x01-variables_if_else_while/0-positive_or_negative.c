#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: is n -ve, +ve, zero
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n == 0)
	{
		puts("is zero");
	}
	else if (n > 0)
	{
		puts("is positive");
	}
	else
	{
		puts("is negative");
	}

	return (0);
}
