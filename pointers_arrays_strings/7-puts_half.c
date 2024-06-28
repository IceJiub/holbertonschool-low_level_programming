#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print the second half of a string
 * @str: string to print second half of
 */

void puts_half(char *str)
{
	int i = 0;
	int start, len;

	while (str[i] != 0)
		i++;
	len = i;
	if ((len % 2) != 0)
		start = (len / 2) + 1;
	else
		start = len / 2;
	for (i = start ; i <= len ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
