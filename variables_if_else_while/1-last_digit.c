#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints a random number n and check
 * if n is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	else if (n < 5)
		printf("Last digit of %d is %d and if less than 6 and not 0\n", n, last_d);
	else
		printf("Last digit of %d is %d and is 0\n", n, last_d);
	return (0);
}