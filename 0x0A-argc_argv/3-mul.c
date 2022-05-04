#include "main.h"
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		results = num1 * num2;
		printf("%d\n", results);
		return (0);
	}
	printf("Error\n");
	return (1);
}
