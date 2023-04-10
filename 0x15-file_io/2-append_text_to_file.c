#include "main.h"
/**
 * append_text_to_file - entry
 * @filename: file
 * @text_content: text
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int count = 0;

	if (filename == NULL)
		return (0);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
		if (write(op, text_content, count) == -1)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
