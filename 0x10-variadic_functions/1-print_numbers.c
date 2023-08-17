#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: what will separate the numbers
 * @n: count of args
 * @...: args
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i++ < n)
	{
		printf("%d%s", va_arg(args, int), (separator && i < n - 1 ? separator : ""));
	}
	printf("\n");

	va_end(args);
}
