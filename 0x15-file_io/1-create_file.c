#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content || !*text_content)
		return (1);

	while (text_content[len])
	{
		len++;
	}

	write(file, text_content, len);

	close(file);
	return (1);
}
