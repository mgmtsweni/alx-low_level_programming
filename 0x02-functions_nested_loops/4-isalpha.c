#include "main.h"
/**
* _isalpha - Entry point
* Description: check if character is alphabet lowercase
* Return: Always 0.
* @c: holds the character under evaluation1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
