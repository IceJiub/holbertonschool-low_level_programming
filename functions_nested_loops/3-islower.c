#include "main.h"
/**
 * _islower - Check if the character is in lowercase
 * @c: The character to check
 *
 * Return: 1 if character is in lowercase
 * 0 is returned if character is not in lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
