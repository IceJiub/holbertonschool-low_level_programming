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
