#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * closed - entry close
 * @cs: file to be closed
 */
void closed(int cs)
{
	int i = close(cs);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opf);
		exit(100);
	}
}
/**
 * main - entry
 * @argc: number of agrs
 * @argv: index
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int re, wr, opt, opf;
	char *fp = malloc(sizeof(char) * 1024);

	if (fp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	opf = open(argv[1], O_RDONLY);
	re = read(opf, fp, 1024);
	opt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (re >= 0)
	{
		if (opf == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(fp);
			exit(98);
		}
		wr = write(opt, fp, re);
		if (opt == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(fp);
			exit(99);
		}
		re = read(opf, fp, 1024);
		opt = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(fp);
	closed(opf);
	closed(opt);
	return (0);
}
