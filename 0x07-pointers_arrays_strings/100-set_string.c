#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: the address a pointer to a pointer
 * @to : the pointer whose values is to be assigned
 *
 * Description -sets the value of a pointer to a char
 * Return : void (nothing)
 */
void set_string(char **s, char *to)
{
	int pointer = 0;
	while(**s != '\0')
	{
		**(s + pointer) = *(to +  pointer);
	}
}
