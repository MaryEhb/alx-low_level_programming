#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 * @...: args
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", (s ? s : "(nil)"));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1])
		{
			printf(", ");
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
