#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: input string
 * @dest: output string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int l;

	i = 0;
	while (dest[i])
		i++;
	l = 0;
	while (src[l])
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
