#include "main.h"

/**
 * jack_bauer - prints every minute of a day, starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int n = 0, m;

	while (n < 24)
	{
		if (n < 12)
		{
			_putchar(0);
			_putchar(n);
			n++;
		}
		else
		{
			_putchar(n);
		}

		_putchar(':');
		
		while (m < 60)
		{
			if (m < 10)
			{
				_putchar(0);
				_putchar(m);
			}
			else
			{
				_putchar(m);
			}

		}
	}
}
