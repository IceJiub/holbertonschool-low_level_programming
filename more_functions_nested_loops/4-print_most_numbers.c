#include "main.h"
/**
 * print_most_numbers - Print numbers from 0 to 9, exept 2 and 4.
 */

void print_most_numbers()
{
	int i = 0;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (!(i == 2 || i == 4))
			_putchar('0' + i);
	}
	_putchar('\n');
}
