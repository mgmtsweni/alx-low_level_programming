#include "main.h"
/**
* swap_int - swap strings
* @a: - input first pointer int
* @b: - input second pointer int
*/
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
