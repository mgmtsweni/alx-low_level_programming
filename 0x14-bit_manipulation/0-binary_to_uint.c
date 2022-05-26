#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int value = 0;
    int i;

    if (!b)
        return (0);
    
    while (b[i] == '0' || b[i] == '1')
    {
        value <<= 1;
        value += b[i] - '0';
        i++;
    }
     return (value);
}
