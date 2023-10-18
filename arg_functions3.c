#include "main.h"

/**
 * _strlen - find length of string
 * @str: string parameter
 * Return: length of string
 */
int _strlen(char *str)
{
	unsigned int i = 0;

	while (*str != '\0')
		i++;
	return (i);
}


/**
 * print_str_rev - Prints string in reverse.
 * @ap: String to print.
 * Return: length of string -1 if it fails.
 */
int print_str_rev(va_list ap)
{
	int length, i;
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		s = "(null)";

		for (i = 0; s[i]; i++)
			_putchar(s[i]);

		return (i);
	}

	length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	return (length);
}
