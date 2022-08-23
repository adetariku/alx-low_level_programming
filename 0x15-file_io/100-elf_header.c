#include "main.h"
#include <elf.h>

void ztitle(char *title);

/**
* errors - prints errors
* @msg:  error message
*
* Return: void(nothing)
*/
void errors(char *message)
{
	/* declarations */
	int length; /* the length of the buffer */

	/* writing the error */
	for (length = 0; message[length]; length++)
		;
	write(STDERR_FILENO, message, length);

	exit(98);
}
/**
  * elf_type - prints type
  *
  *@buffer: contains type info
  *
  * Return: void(nothing)
  */
void elf_type(char *buffer)
{
	ztitle("Type");
	switch (buffer[6])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", buffer[6]);
		break;
	}
	printf("\n");
}
/**
* elf_ABIversion - prints the ABI version
* @buffer: contains the ABI version
*
* Return: void
*/
void elf_ABIversion(char *buffer)
{
	/*handling the ABI set */
	ztitle("ABI Version");

	printf("%d", buffer[8]);

	printf("\n");
}

/**
 *elf_entry - prints the ELF entry point address
 *
 */
void elf_entry(void)
{
	Elf64_Ehdr h;
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
}

/**
* pos - printing the os/abi
* @buffer: contains os/abi info
*
* Return: void
*/
void pos(char *buffer)
{
	/* handling the OS ABI set */
	ztitle("OS/ABI");

	switch (buffer[7])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - GNU");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[7]);
	}
	printf("\n");
}
/**
* elf_version- printing version
* @buffer: contains version
*
* Return: void
*/
void elf_version(char *buffer)
{
	/* handling the version set */
	ztitle("Version");

	switch (buffer[6])
	{
		case EV_NONE:
			printf("0");
			break;
		case EV_CURRENT:
			printf("1 (current)");
			break;
		default:
			printf("%d <unknown: %%lx>", (int)buffer[6]);
	}

	printf("\n");
}
/**
* pdata - printing the data handling
* @buffer: contains data handling info
*
* Return: void
*/
void elf_data(char *buffer)
{
	/* handling the data set */
	ztitle("Data");

	switch (buffer[5])
	{
		case ELFDATANONE:
			printf("none");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[5]);
	}

	printf("\n");
}
/**
* elf_magic - printing the Magic we need
* @buffer: contains magic
*
* Return: void
*/
void elf_magic(char *buffer)
{
	/* declarations */
	int i;

	/* handling the magics */
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%.2x ", buffer[i]);
	printf("\n");
}
/**
* elf_class - printing the class, in class
* @buffer: the buffer containing class or none
*
* Return: void
*/
void elf_class(char *buffer)
{
	/*handling the class */
	ztitle("Class");

	switch (buffer[4])
	{
		case ELFCLASSNONE:
			printf("none");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		default:
			printf("<unknown: %x>", (unsigned int)buffer[4]);
	}
	printf("\n");
}
/**
* ztitle - printing titles since 2020
* @title: the title
*
* Return: void
*/
void ztitle(char *title)
{
	/* declarations */
	int size = 37;
	int len, i;

	/*handling the titles & spaces*/
	printf("  ");
	printf("%s:", title);

	for (len = 0; title[len]; len++)
		;

	for (i = 0; i < size - 3 - len; i++)
		printf(" ");
}
/**
* main - print a ELF header and such
* @argc: count of args
* @argv: vector of args
*
* Return: int or exit code
*/
int main(int argc, char **argv)
{
	/* declarations */
	int fd, readVal, i;
	char buffer[16];
	char match[4] = {0x7f, 'E', 'L', 'F'};
	/* too many args? too few? */
	if (argc != 2)
		errors("Improper usage\n");
	/* file descriptor, opening */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		errors("Could not open the file\n");
	/* reading */
	readVal = read(fd, buffer, 16);
	if (readVal == -1)
		errors("Could not read from the file\n");
	/* checking for elfage */
	for (i = 0; i < 4; i++)
	{
		if (buffer[i] != match[i])
			errors("Sorry, it's not an ELF file!\n");
	}
	/*printing the header! */
	printf("ELF Header:\n");
	elf_magic(buffer);
	elf_class(buffer);
	elf_data(buffer);
	elf_version(buffer);
	pos(buffer);
	elf_ABIversion(buffer);
	elf_type(buffer);
	elf_entry();
	/* close and check for close */
	if (close(fd))
		errors("Could not close the file");

	return (0);
}
