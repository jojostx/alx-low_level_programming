#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that multiplies two positive numbers
 * Print the result, followed by a new line
 * if the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. 
 * If not, print Error, followed by a new line, and exit with a status of 98
 *
 * Return: (0) or fails with status of 98
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n"), exit(98);

	return (0);
	
}
