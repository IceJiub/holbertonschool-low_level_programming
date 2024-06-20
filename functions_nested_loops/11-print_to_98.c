#include "main.h"
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: starting number to print following numbers from
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i < 0)
			{	
				_putchar('-');
				if (i <= -10)
				{
					_putchar('0' + i * -1 / 10);
					_putchar('0' + i * -1 % 10);
				}
				else
				{
					_putchar('0' + i * -1);
				}
			}
			else if (i >= 10)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else if (i < 10)
			{
				_putchar('0' + i);
			}
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			if (i >= 100)
				_putchar('0' + i / 100);
			if (i >= 10)
			{	
				_putchar('0' + i / 10 % 10);
				_putchar('0' + i % 10);
			}
			else
			{
				_putchar('0' + i);
			}
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}