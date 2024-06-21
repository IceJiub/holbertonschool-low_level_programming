#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	int n = 1024;
	int resultat = 0;
	int i, multiple_3, multiple_5;

	if ((n % 3) == 0)
		multiple_3 = (n / 3) - 1;
	else 
		multiple_3 = n / 3;
	if ((n % 5) == 0)
		multiple_5 = (n / 5) - 1;
	else
		multiple_5 = n / 5;

	for (i = 1 ; i <= multiple_3 ; i++)
	{
		resultat += i * 3;
	}
	for (i = 1 ; i <= multiple_5 ; i++)
	{
		resultat += i * 5;
	}
	printf("%d\n", resultat);
	return (0);
}
