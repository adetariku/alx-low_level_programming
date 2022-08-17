#include <unistd.h>
/**
 * _putchar - writes character c to console
 *@c : integer input
 *
 * Return: 1 on success. -1 on error
 */
int _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
	return  1;
}
