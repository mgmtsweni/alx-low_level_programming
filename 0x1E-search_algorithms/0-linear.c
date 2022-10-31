#include "search_algos.h"
/*
* liner_search - searches for a int value in a
* @array - a pointer to the first element
* @size - size of the array
* @value - value to be search
* return -1 if not found || value if it's found
*/
int linear_search(int *array, size_t size, int value)
{
    int i;

    if (array == NULL)
        return (-1);
    for (i = 0; i < (int)size; i++)
    {
            printf("Value checked array[%u] = [%d]\n", i, array[i]);
            if (array[i] == value)
                return (i);
    }
    return (-1);
}
