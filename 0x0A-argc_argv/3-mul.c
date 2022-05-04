#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		results = num1 * num2;
		printf("%d x %d = %d\n", num1, num2, results);
		return (0);
	}
}
