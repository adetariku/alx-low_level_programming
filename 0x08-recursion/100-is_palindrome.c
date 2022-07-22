/**
  * _strlen - returns the length of a string.
  * @s: the input string
  *
  * Return: the length of a string
  */
int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++ ;
		s++;
	}
	return (i);
}
/**
  * check_palindrome - checks if a string is palindrome or not
  * @s: the input string
  * @I: is a counter index
  * 
  * Return : 1 if s is palindrome , 0 otherwise
  */
int check_palindrome(char *s, int n, int i)
{
	if (*(s + i) != *(s + n - 1 - i))
	{
		return (0);	
	}
        if (i >= n / 2 )
	{
		return (1);
	}
	return (check_palindrome(s, n, i + 1));
}
/** 
  * is_palindrome - prints whether a string is palindrome or not
  * @s : input string 
  * 
  * Return: 1 if s is palindrome , 0 otherwise
  */
int is_palindrome(char *s)
{
	int i = 0;
        int n = _strlen(s);
	return (check_palindrome (s, n, i));
}


