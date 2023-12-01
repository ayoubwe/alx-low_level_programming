#include "main.h"

/**
 * append_text_to_file - appends tezt at the end.
 * @filename: const char
 * @text_content: char
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	z = open(filename, O_WRONLY | O_APPEND);

	if (z == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(z, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(z);

	return (1);
}
