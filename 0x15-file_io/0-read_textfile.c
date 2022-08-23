#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile - reads predeterimined number of chars from a file
 * @filename: name of file
 * @letters: number of letters to read
 *
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declarations */
	int fd; /*file descriptor */
	int retVal; /* returned values */
	int writeVal; /* write values */
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}
	retVal = read(fd, buf, letters);
	if (retVal < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}
	writeVal = write(STDOUT_FILENO, buf, retVal);
	if (writeVal < 0 || writeVal != retVal)
	{
		close(fd);
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (retVal);
}
