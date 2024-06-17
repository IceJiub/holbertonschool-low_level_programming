#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
