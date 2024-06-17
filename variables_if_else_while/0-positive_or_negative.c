#include <stdio.h>
#include <time.h>
/**
 * main - Prints a random number n and check
 * if n is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	  printf("%d is negative\n", n);
	else if (n > 0)
	  printf("%d is positive\n", n);
	else
	  printf("0 is zero\n");
	return (0);
}
