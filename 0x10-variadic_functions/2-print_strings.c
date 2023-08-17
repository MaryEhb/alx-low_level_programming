#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator
 * @n: count
 * @...: arg
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	while (i++ < n)
	{
		s = va_arg(args, char *);
		printf("%s%s", (s ? s : "(nil)"), (separator && i < n ? separator : ""));
	}

	printf("\n");
	va_end(args);
}

