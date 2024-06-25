/**
 * _strlen - Return the length of a string
 * @s: string to check
 * Return: Length of a string
 */

int _strlen(char *s)
{
        int i;

        while (s[i] != 0)
                i++;
        return (i);
}
