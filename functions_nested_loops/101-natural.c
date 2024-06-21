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

	multiple_3 = n / 3;
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
