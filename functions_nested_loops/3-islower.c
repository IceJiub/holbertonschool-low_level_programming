#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - Prints 10 times the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
