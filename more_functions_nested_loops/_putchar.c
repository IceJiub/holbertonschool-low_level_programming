#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * put_int - Display number i using _putchar function
 * @i: number to display
 */
void put_int(int i)
{
        if (i < 0)
        {
                _putchar('-');
                if (i <= -100)
                        _putchar('0' + i * -1 / 100);
                if (i <= -10)
                {
                        _putchar('0' + i * -1 / 10 % 10);
                        _putchar('0' + i * -1 % 10);
                }
                else
                        _putchar('0' + i * -1);
        }
        else
        {
                if (i >= 100)
                        _putchar('0' + i / 100);
                if (i >= 10)
                {
                        _putchar('0' + i / 10 % 10);
                        _putchar('0' + i % 10);
                }
                else
                        _putchar('0' + i);
        }
}
