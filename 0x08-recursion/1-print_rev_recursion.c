#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse, followed
 * by a new line.
 * @s: string start
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*(s - 1));
	}
}
