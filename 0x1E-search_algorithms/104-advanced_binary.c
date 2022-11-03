#include "search_algos.h"
/*
* adva_binary - performs advanced binary search
* @array: a pointer to the first element
* @size: size of the array
* @value: value to be search
* Return: !array || array is NULL retrun -1 
*/
int adva_binary(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!size || !array)
		return (NULL);

	for (printf("Searching in array: "); i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

	i = (size - 1) / 2;
	if (array[i] == value)
	{
		if (i)
			return (adva_binary(array, i + 1, value));
		return (array + i);
	}
	else if (array[i] > value)
		return (adva_binary(array, i + 1, value));
	else
		return (adva_binary(array + i + 1, size - i - 1, value));
}

/**
 * advanced_binary - performs advanced binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 * Return: the index found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int *func = adva_binary(array, size, value);

	if (!func)
		return (-1);
	else
		return (func - array);
}
