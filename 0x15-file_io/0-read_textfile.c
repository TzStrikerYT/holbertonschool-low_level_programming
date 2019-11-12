#include "holberton.h"

/**
 * read_textfile - Read an inputted text file and
 * print contents to standard output
 * @filename: Name of the file to read from
 * @letters: The number of characters to read
 *
 * Return: Number of characters, 0 on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reader, writer;
	char *buff;

	if (filename == 0)
		return (0);

	buff = malloc(letters * sizeof(char));

	if (buff == 0)
		return (0);

	fd  = open(filename, O_RDONLY);

	if (fd == -1)
		return (free(buff), 0);

	reader = read(fd, buff, letters);

	if (reader == -1)
		return (free(buff), 0);

	buff[letters] = '\0';

	writer = write(STDOUT_FILENO, c, checkr);
	if (writer == -1)
		return (free(buff), 0);

	free(buff);
	close(fd);
	return (writer);
}
