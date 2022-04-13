#include "main.h"
#include <stdio.h>
/**
* print_to_98 - entry point
* Description:  prints all natural numbers from n to 98
* Return: 0 on success
* @n: holds the character under evaluation101
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
		printf("98\n");
}
