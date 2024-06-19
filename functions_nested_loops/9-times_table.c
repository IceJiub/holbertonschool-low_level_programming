#include "main.h"
/**
 * times_table - Print the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, n, time, d1, d2;

	for (time = 0 ; time <= 9 ; time++)
	{
		_putchar('0');
		for (i = 1 ; i <= 9 ; i++)
		{
			n = i * time;
			if (n >= 10)
			{
				d1 = n / 10;
				d2 = n % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d1 + '0');
				_putchar(d2 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
