#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len, i;
	char *begin_ptr, *end_ptr, ch;

	i = 0;
	while (s[i] != 0)
		i++;
	len = i;
	begin_ptr = s;
	end_ptr = s + len - 1;
	for (i = 0 ; i < (len - 1) / 2 ; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
}
