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
			put_int(n);
		}
		_putchar('\n');
	}
}
