#include <stdio.h>

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int line, i;

	if (size <= 0)
		printf("\n");
	else
	{
		for (line = 1 ; line <= size ; line++)
		{
			for (i = 1 ; i <= size - line ; i++)
				printf(" ");
			for (i = 1 ; i <= line ; i++)
				printf("#");
			printf("\n");
		}
	}
}
