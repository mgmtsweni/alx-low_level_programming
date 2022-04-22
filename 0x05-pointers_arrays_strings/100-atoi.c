#include "main.h"
/**
* _atoi - int
* @s: pointer
* Return: int.
*/
int _atoi(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i = i * 10 + *s - '0';
		s++;
	}
	return (i);
}
