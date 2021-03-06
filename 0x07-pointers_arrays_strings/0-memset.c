/**
 * _memset - fills memory with a constant byte
 * @s: memory locations to be filled
 * @b: bytes to fill memeory space
 * @n: number of memory arrays  to fill
 *
 * Return: pointer to memory location  s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		*(s + counter) = b;
	}
	return (s);
}
