#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0;
	ssize_t len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (len)
		b = write(fd, text_content, len);

	close(fd);
	return (b == len ? 1 : -1);
}
