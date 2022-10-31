#include "main.h"
/**
* _abs - Entry point
* Description: print absolute values
* Return: Always 0.
* @n: holds the character under evaluation1
*/
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n = n * -1);
	else
		return (0);
}
