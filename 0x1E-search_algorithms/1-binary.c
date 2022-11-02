#include "search_algos.h"
/*
* binary_search - searches for a int value in a v array
* @array: a pointer to the first element
* @size: size of the array
* @value: value to be search
* Return: !array || array is NULL retrun -1 
*/
int binary_search(int *array, size_t size, int value)
{
    size_t i, end, start;

    if (array == NULL)
        return (-1);

    for (start = 0, end = size - 1; end >= start;)
    {
        printf("Searching in array: ");
        for (i = start; i < end; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        i = start + (end - start) / 2;
        if (array[i] == value)
            return (value);
        else if (array[i] > value)
            end = i - 1;
        else
            start = i + 1;    
    }
    return (-1);
}
