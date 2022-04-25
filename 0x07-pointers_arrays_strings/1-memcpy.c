#include "main.h"
/**
 * _memcpy - copies n bytes from memory area "src" to memory area "dest"
 * @dest: the memory area destination.
 * @src: the memory area source.
 * @n: the number of bytes to copy from "src"
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
