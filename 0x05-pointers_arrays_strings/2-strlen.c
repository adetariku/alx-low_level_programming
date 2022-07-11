#include <stdlib.h>

/**
  * _strlen - length of a character string
  * @s : a pointer to string
  *
  * Return : length of string
  */
int _strlen(char *s)
{
	int count;
	int i;

	count = -1;
	i = 0;
	while(*(s +  i) != '\0')
	{
		count = count + 1;
		i = i + 1;
	}	
	return (count + 1);

}
