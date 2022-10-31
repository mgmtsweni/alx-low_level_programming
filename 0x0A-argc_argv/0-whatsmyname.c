#include <stdio.h>
/**
 * main - Print the name of the program
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
