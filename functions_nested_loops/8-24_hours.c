#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer,
 * start from 00:00 to 23:59
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i = 0;
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;

	while (i < 1440 && m2 <= 9)
	{
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');
		m2++;
		if (m2 == 10)
		{
			m2 = 0;
			m1++;
		}
		if (m1 == 6)
		{
			m1 = 0;
			h2++;
		}
		if (h2 == 10)
		{
			h2 = 0;
			h1++;
		}
	i++;
	}
}
