#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @c: input string
 * return: string
 */

char *string_toupper(char *c)
{
	if ('a' <= c && c <= 'z')
	{
		c -= 'a' - 'A';
		return (c);
	}
	return (c);
}
