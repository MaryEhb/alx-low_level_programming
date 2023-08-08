#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: size
 * @av: arguments to concate
 * Return: a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, tot_size = 0;
	char *p;

	if (ac == 0 || av == 0)
		return (0);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			tot_size++;
			j++;
		}
		tot_size++;
		i++;
	}
	tot_size++;
	p = (char *)malloc(sizeof(char) * tot_size);
	if (!p)
		return (0);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			p[k] = av[i][j];
			k++;
			j++;
		}
		p[k] = '\n';
		k++;
		i++;
	}
	p[k] = '\0';
	return (p);
}
