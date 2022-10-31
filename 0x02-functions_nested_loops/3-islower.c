#include "main.h"
/**
* _islower - Entry point
* Description: check if character is lowercase
* Return: Always 0.
* @c: holds the character under evaluation1~
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
