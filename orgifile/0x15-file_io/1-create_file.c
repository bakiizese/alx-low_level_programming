#include "main.h"
/**
 * create_file - entry
 * @filename: file
 * @text_content: buf
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	int count  = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
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
