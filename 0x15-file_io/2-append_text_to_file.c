#include "main.h"
#include <stddef.h>

/**
* append_text_to_file - a function that appends text at the end of a file
* @filename: pointer to the name of the file
* @text_content: string to add at the end of the file
* Return: 1 on success and -1 on failure
* if the function fails or filename is NULL -1
* if the file does nort exist or the user lacks permission -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
