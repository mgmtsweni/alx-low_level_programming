#include "search_algos.h"
/*
* liner_search - searches for a int value in an array
* @array: a pointer to the first element
* @size: size of the array
* @value: value to be search
* Return: !array || array is NULL retrun -1 
*/
int linear_search(int *array, size_t size, int value)
{
    int i;

    if  (array == NULL)
    return (-1);

    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%u] = [%d]\n", i, array[i]);
        if (array[i] == value)
        return (i);
    }
    return (-1);
}
