#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int line, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 1 ; line <= size ; line++)
		{
			for (i = 1 ; i <= size - line ; i++)
				_putchar(' ');
			for (i = 1 ; i <= line ; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
