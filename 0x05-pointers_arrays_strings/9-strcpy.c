#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @src: input string
 * @dest: output string
 * Return:  return
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
