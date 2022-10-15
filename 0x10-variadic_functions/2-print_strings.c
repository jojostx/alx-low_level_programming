#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by newline
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *cur_str;
	va_list ap;

	if (n == 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		cur_str = va_arg(ap, char *);

		if (cur_str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", cur_str);
		}

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
