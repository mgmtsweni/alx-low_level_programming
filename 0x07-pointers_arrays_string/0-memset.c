#include "main.h"
/**
 * _memset - it fills a block of memory with constant byte.
 * @s: a pointer to a memory area.
 * @b:the constant byte.
 * @n: the number of bytes of memory to be filled with b.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
