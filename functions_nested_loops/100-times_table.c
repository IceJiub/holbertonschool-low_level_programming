#include "main.h"
/**
 * put_int - Display number i using _putchar function
 * @i: number to display
 */
void put_int(int i)
{
	if (i < 0)
	{
		_putchar('-');
		if (i <= -100)
			_putchar('0' + i * -1 / 100);
		if (i <= -10)
		{
			_putchar('0' + i * -1 / 10 % 10);
			_putchar('0' + i * -1 % 10);
		}
		else
			_putchar('0' + i * -1);
	}
	else
	{
		if (i >= 100)
			_putchar('0' + i / 100);
		if (i >= 10)
		{
			_putchar('0' + i / 10 % 10);
			_putchar('0' + i % 10);
		}
		else
			_putchar('0' + i);
	}
}

/**
 * print_times_table - Print the n times table, starting with 0.
 * @n: number of time to print table
 */
void print_times_table(int n)
{
	int i, time, resultat;

	if ((n < 15 && n > 0) || n == 0)
	{
		for (time = 0 ; time <= n ; time++)
		{
			_putchar('0');
			for (i = 1 ; i <= n ; i++)
			{
				resultat = i * time;
				_putchar(',');
				if (i * time >= 100)
				{
					_putchar(' ');
					put_int(resultat);
				}
				else if (i * time >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					put_int(resultat);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					put_int(resultat);
				}
			}
			_putchar('\n');
		}
	}
}
