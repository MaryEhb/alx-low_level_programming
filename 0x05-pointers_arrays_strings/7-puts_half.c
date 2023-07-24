#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to first character
 * Return: 0
 */

void puts_half(char *str)
{
	int length = 0, n;

	while (*(str + length) != '\0')
	{
		length++;
	}
	length--;
	if (length % 2)
	{
		n = (length - 1) / 2;
	}
	else
	{
		n = length / 2;
	}

	n++;
	while (n <= length)
	{
		_putchar(*(str + n));
		n++;
	}

	_putchar('\n');

}
