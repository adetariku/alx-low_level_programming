#include "main.h"
/**
  * _strlen - get length of a string
  * @s: input string
  *
  *
  * Return: length
  */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count]; count++)
	{}
	return (count);
}
/**
 * create_file - a function to  create a file
 * @filename:  name of the file to be created
 * @text_content: the text to be written
 *
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	int writeVal;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	count = _strlen(text_content);
	writeVal = write(fd, text_content, count);
	if (writeVal < 0 || writeVal != count)
		return (-1);
	return (1);
}
