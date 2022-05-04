#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: always 0 (success)
 */
int	main(int argc, char *argv[])
{
	int i;
	
	if (argc > 1)
	{
		i = 0;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
