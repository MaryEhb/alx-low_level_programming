#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints it to the
 * POSIX standard output.
 * @filename: file name
 * @letters: number of letters it should read and print.
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	int file;
	ssize_t count;

	if (!filename || !letters)
		return (0);

	s = malloc(sizeof(char) * letters);

	if (!s)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(s);
		return (0);
	}

	count = read(file, s, letters);
	count = write(STDOUT_FILENO, s, count);

	close(file);
	free(s);
	return (count);
}
