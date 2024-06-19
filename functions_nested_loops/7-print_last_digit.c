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
	int last_digit;

	if (n < 0)
		last_digit = (n * -1) % 10;
	else
		last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
