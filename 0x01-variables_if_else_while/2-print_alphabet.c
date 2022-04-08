#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* Description: random number in n +ve/-ve
* Return: 0 on success
*/
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
