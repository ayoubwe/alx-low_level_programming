#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename:const char
 * @letters: size_t
 * Return: numbers of letters or returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int z;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	z = open(filename, O_RDONLY);

	if (z == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(z, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(z);

	free(buf);

	return (nwr);
}
