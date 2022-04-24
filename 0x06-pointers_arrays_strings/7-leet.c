#include "main.h"
/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
*/
char *leet(char *s)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;
	
	j = 0;
	while (s[j] != '\0')
	{
		i = 0;
		while (a[i] != '\0')
		{
			if (s[j] == a[i])
				s[j] = b[i];
			i++
		}
		j++;
	}
	return (s);
}
