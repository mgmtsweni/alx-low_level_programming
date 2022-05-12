#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(valist, int);
		i++;
	}
	va_end(valist);

	return (sum);
}
