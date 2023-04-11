#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a fil
 * @filename: is the name of the file
 * @text_content: content all text
 * Return: (1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for ( ; text_content[i] != '\0'; i++)
		;
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	return (1);
}
