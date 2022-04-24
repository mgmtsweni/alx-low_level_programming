#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: input string
 * return: string
 */
char *cap_string(char *)
{
	int i = 0;

	/* check first index for capital */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;
	while (s[i] != '\0') /* iterate through string */
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
		&& (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
		|| s[i - 1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}
