#include "main.h"
/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t' ||
			*s == '\v' || *s == '\f' || *s == '\r'))
		++s;
	if (*s == '-')
		negative = -1;
	if (*s == '-' || *s == '+')
		++s;
	while (*s && *s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - 48);
		++s;
	}
	return (res * negative);
}
