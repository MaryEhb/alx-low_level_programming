#include "main.h"

/**
 * _isalpha - check if character is lowercase
 * @c: the character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	return (c >= 'A' && c <= 'z');
}
