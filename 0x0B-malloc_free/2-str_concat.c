#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s1_len = 0, s2_len = 0;
	int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
	s1_len++;
	while (s2[s2_len] != '\0')
	s2_len++;

	size = s1_len + s2_len;
	concat = malloc(sizeof(char) * (size + 1));
	if (concat == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && j < s2_len)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
