#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all possible combinations of
 * single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
