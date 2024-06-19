#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * print_last_digit - Print the last digit of a number n
 *
 * @n: The value to check
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	if (n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = (n * -1) % 10;
		return (n);
	}
	else
	{
		n = n % 10;
		return (n);
	}
}
