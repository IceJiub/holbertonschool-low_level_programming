#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
