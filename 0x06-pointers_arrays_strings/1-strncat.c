#include "main.h"
/**
* _strncat - concatenates two strings.
* @src: input string
* @dest: output string
* @n: input byte
* Return:  return
*/
char *_strncat(char *dest, char *src, int n)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (i < n && src[i])
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
