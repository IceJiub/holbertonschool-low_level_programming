#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed by dest
 * @dest: buffer where string is printed
 * @src: string to copy
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len;

	while (src[i] != 0)
		i++;
	len = i;

	for (i = 0 ; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
