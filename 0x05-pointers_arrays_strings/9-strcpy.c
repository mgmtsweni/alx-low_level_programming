#include "main.h"
/**
 * _strcpy - copy string
 * @str: input string
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
	return (dest);
}
