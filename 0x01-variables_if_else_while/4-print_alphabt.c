#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* Description: program that prints the alphabet in lowercase
* Return: 0 on success
*/
int main(void)
{
	char Alpha;
	char capture;

	Alpha = 'a';
	while (Alpha <= 'z')
	{
		capture = Alpha;
		Alpha++;
	if (capture != 'q' && capture != 'e')
		putchar(capture);
	}
	putchar('\n');
	return (0);
}
