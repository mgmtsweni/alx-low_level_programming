#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;
	
	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
