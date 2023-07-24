#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointr to first character
 * Return: 0
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	s--;

	while (count)
	{
		_putchar(*s);
		count--;
		s--;
	}

	_putchar('\n');

}
