#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: pointer to function that takes operator as character
 * Return: result of operation
 */

int (*get_op_func(char *s))(int, int)
{
	char op_arr[5] = {'+', '-', '*', '/', '%'};
	int (*func_ptr_arr[5])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	unsigned int j = 0;

	while (j < 5)
	{
		if (op_arr[j] == s[0])
		{
			return (func_ptr_arr[j]);
		}

		j++;
	}
	return (0);
}
