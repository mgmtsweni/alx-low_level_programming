#include "main.h"
/**
 * _strcpy - copy string
 * @str: input string
 * @dest: output string
 * Return:  return
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] = src[i])
		i++;
}

int main(void)
{
	char s1[98];
        char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
