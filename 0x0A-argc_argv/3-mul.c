#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);

}
