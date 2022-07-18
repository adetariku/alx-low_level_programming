/**
 * _memset - fills memory with a constant byte
 * @s: memory locations to be filled
 * @b: byte to fill memeory space
 * @n: number of memory arrays  to fill
 *
 * Return: pointer to memory location  s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
