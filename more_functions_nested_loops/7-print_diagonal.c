#include "main.h"

/**
 * print_diagonal - Draw a diagonal line
 * @n: numbers of times the character '\' should be printed
 */

void print_diagonal(int n)
{
	int i, line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 0 ; line < n ; line++)
		{
			for (i = 0 ; i < line ; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
