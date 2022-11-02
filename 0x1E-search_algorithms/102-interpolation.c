#include "search_algos.h"
/*
*interpolation_search - searches value in sorted array using
						Interpolation search algorithm
* @array: a pointer to the first element
* @size: size of the array
* @value: value to be search
* Return: !array || array is NULL retrun -1 
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, y, x;

	if (array == NULL)
		return (-1);

	for (y = 0, x = size - 1; x >= y;)
	{
		i = y + (((double)(x - y) / (array[x] - array[y])) * (value - array[y]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			x = i - 1;
		else
			y = i + 1;
	}
	return (-1);
}
