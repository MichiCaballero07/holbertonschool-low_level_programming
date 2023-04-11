#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * @filename: pointer of function
 * @letters: size of letters
 * Return: number of characteres
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, ld, wr;
	char *buf;

	buf = malloc(letters);
		if (buf == NULL)
			return (0);
		if (filename == NULL)
			return (0);

	file = open(filename, O_RDONLY);
		if (file == -1)
		{
			free(buf);
			return (0);
		}

	ld = read(file, buf, letters);
	wr = write(STDOUT_FILENO, buf, ld);
	close(file);
	return (wr);
}
