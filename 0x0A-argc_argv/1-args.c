#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
