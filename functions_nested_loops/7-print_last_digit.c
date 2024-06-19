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
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
