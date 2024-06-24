#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 ten times.
 */

void more_numbers(void)
{
	int line, n = 0;

	for (line = 0 ; line < 10 ; line++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n < 10)
				_putchar('0' + n);
			else if (n >= 10)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
		}
		_putchar('\n');
	}
}
