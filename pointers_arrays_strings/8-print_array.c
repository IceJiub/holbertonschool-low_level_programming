#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers.
 * @a: array of integers
 * @n: number of elements of an array a to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0 ; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
