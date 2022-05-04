#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strt;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	strt = (char *)malloc(sizeof(char) * (i + 1));

	if (strt == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strt[j] = str[j];

	return (strt);
}
