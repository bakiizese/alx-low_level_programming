#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - entry
 * @filename: filename
 * @letters: num of letters
 * Return: 0 or wr
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, re, wr;
	char *fp = malloc(sizeof(char) * letters);

	if (fp == NULL)
		return (0);
	if (filename == NULL)
	{
		free(fp);
		return (0);
	}
	op = open(filename, O_RDONLY);
	re = read(op, fp, letters);
	if (op == -1)
	{
		free(fp);
		return (0);
	}
	if (re == -1)
	{
		free(fp);
		return (0);
	}
	wr = write(STDOUT_FILENO, fp, re);
	if (wr == -1 || wr != re)
	{
		free(fp);
		return (0);
	}
	free(fp);
	close(op);
	return (wr);
}
