#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the size of various types on the
 *computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	long int ln;
	long long int lln;
	float f;
	char c;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(n));
	printf("Size of a long int: %zu byte(s)\n", sizeof(ln));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lln));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}
