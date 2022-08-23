#include "main.h"
/**
  * _strlen - get length  of a string
  * @s: input string
  *
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length]; length++)
	{}
	return (length);
}

/**
 * append_text_to_file - appends a text to a file
 * @filename: name of file
 * @text_content: content to be appened
 *
 * Return: 1 on success and -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, fd, writeVal;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	writeVal = write(fd, text_content, len);
	if (writeVal < 1 || writeVal != len)
		return (-1);
	return (1);
}
