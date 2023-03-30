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
 * _strlen - function to swap numbers value.
 *
 * @s: the counter
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	return (i);
}
