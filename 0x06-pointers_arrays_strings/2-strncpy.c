#include "main.h"
/**
* _strncpy - copies the string pointed to by str
* @src: input string
* @n: input int
* @dest: output string
* Return:  return
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++
	}
	return (dest);
}
