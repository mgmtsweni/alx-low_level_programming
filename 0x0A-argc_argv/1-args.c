#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d", argc);

	return (0);
}
