#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_str_or_nil - prints a string if it is not NULL otherwise print (nil)
 * @s: string to print
 *
 * Return: nothing
 */
void print_str_or_nil(char *s)
{
	if (!s)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - prints anything according to a format string
 * @format: string to format by
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int a, i = 0, c = 0;
	va_list ap;
	const char t_arg[] = "sicf";

	va_start(ap, format);

	while (format && format[i])
	{
		a = 0;
		while (t_arg[a])
		{
			if (format[i] == t_arg[a] && c)
			{
				printf(", ");
				break;
			}
			a++;
		}
		switch (format[i])
		{
			case 's':
				print_str_or_nil(va_arg(ap, char *)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), c = 1;
				break;
			case 'c':
				printf("%c", va_arg(ap, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), c = 1;
				break;
		}
		i++;
	}
	printf("\n"), va_end(ap);
}
