#include "main.h"

/**
 * append_text_to_file - Helps to append some text at the end of a file
 * @filename: name of the file pointer
 * @text_content: end of the file string to be added
 *
 * Return: when function failure or filename NULL - -1
 *         when file does not exist or lack of writing permissions - -1
 *         otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
