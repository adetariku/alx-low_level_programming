#incllude "main.h"
/**
  * _strlen_recursion - prints the length of a string usig recursive function
  * @s : a pointer to a character string
  *
  * Rerturn : integer (the length of the input string)
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
