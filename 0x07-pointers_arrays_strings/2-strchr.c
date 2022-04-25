#include "mainn.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointer to string.
 * @c: character to be found.
 * Return: pointer to first occurence of the character.
 * or null if character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if (*s++ == c)
			return (s);
	return (s);
}
