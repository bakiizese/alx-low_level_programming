#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * Magic - entry
 * @j: var
 */
void Magic(unsigned char *j)
{
	int i = 0;

	printf("Magic: ");

	while (i < EI_NIDENT)
	{
		printf("%02x", j[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * Class - entry
 * @j: var
 */
void Class(unsigned char *j)
{
	printf(" Class: ");

	if (j[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (j[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (j[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("unknown: %x\n", j[EI_CLASS]);
}
/**
 * Data - entry
 * @j: var
 */
void Data(unsigned char *j)
{
	printf(" Data: ");
	if (j[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (j[EI_DATA] == ELFDATA2LSB)
		printf("little endian\n");
	else if (j[EI_DATA] == ELFDATA2MSB)
		printf("bif endian\n");
	else
		printf("unknown: %x\n", j[EI_CLASS]);
}
/**
 * Vers - entry
 * @j: var
 */
void Vers(unsigned char *j)
{
	printf(" Version: ");
	printf("%d", j[EI_VERSION]);
	if (j[EI_VERSION] == EV_CURRENT)
		printf("(current)\n");
	else
		printf("\n");
}
/**
 * Osa - entyr
 * @j: var
 */
void Osa(unsigned char *j)
{
	printf(" OS/ABI: ");
	if (j[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - SYSTEM V\n");
	else if (j[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HPUX\n");
	else if (j[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NETBSD\n");
	else if (j[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - LINUX\n");
	else if (j[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (j[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FREEBSD\n");
	else if (j[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (j[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (j[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - SOLARIS\n");
	else if (j[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("STANDALONE APP\n");
	else
		printf("unknown: %x\n", j[EI_OSABI]);
}
/**
 * Type - entry
 * @e_type: var
 * @j: var
 */
void Type(unsigned int e_type, unsigned char *j)
{
	printf(" Type: ");
	if (j[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	if (e_type == ET_REL)
		printf("REL (RELOCATABLE FILE)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (EXECUTABLE FILE)\n");
	else if (e_type == ET_DYN)
		printf("DYN (SHARED OBJECT FILE)\n");
	else if (e_type == ET_CORE)
		printf("CORE (CORE FILE)\n");
	else if (e_type == ET_NONE)
		printf("NONE (NONE)\n");
	else
		printf("unknown: %x\n", e_type);
}
/**
 * Entry - entry
 * @entry: var
 * @j: var
 */
void Entry(unsigned long int entry, unsigned char *j)
{
	printf(" Entry point address: ");
	if (j[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (j[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}
/**
 * closed - entry
 * @j: var
 */
void closed(int j)
{
	if (close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(98);
	}
}
/**
 * checker - entry
 * @i: var
 */
void checker(unsigned char *i)
{
	int j = 0;

	while (j < 4)
	{
		if (i[j] != 127 && i[j] != 'E' && i[j] != 'L' && i[j] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		j++;
	}
}
/**
 * Abi - entry
 * @j: var
 */
void Abi(unsigned char *j)
{
	printf(" ABI VERSION: %d\n", j[EI_ABIVERSION]);
}
/**
 * main - entry
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, re;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closed(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	re = read(op, header, sizeof(Elf64_Ehdr));
	if (re == -1)
	{
		free(header);
		closed(op);
		dprintf(STDERR_FILENO, "Error: %s: No such file\n", argv[1]);
		exit(98);
	}

	Magic(header->e_ident);
	Class(header->e_ident);
	Data(header->e_ident);
	Vers(header->e_ident);
	Osa(header->e_ident);
	Abi(header->e_ident);
	Type(header->e_type, header->e_ident);
	Entry(header->e_entry, header->e_ident);

	closed(op);
	free(header);
	return (0);
}
