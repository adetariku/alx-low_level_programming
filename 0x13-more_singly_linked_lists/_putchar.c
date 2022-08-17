#include <unistd.h>
/**
 * _putchar - writes character c to console
 *@c : integer input
 *
 * Return: 1 on success. -1 on error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
