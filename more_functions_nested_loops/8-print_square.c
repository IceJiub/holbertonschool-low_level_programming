#include "main.h"

/**
 * print_square - Print a square of '#'
 * @size: size of the square
 */

void print_square(int size)
{
	int line, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 0 ; line < size ; line++)
		{
			for (i = 0 ; i < size ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
