#include "main.h"
#include <stdio.h>

/**
 * puts2 - Print every other character of a string,
 * starting with the first character
 * @str: string
 */

void puts2(char *str)
{
	int i = 0;
	int len;

	while (str[i] != 0)
		i++;
	len = i;
	for (i = 0 ; i < len ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
