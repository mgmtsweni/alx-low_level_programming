#include "main.h"
/**
 *_strlen - check the legnth of a string
 * @s: input char
 * Return: legnth of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
