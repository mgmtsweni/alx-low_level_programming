#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	k = 0;
	while (k < i)
	{
		strout[k] = s1[k];
		k++;
	}

	limit = j;
	j = 0;
	while (j <= limit; k++)
	{
		strout[k] = s2[j];
		j++
	}
	return (strout);
}
