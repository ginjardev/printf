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
	{
		++str;
		i++;
	}
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

/**
 * print_custom_str - prints custom string
 * @ap: va_list object
 * Return: string length
 */
int print_custom_str(va_list ap)
{
	int i, j = 0;
	char *s = va_arg(ap, char *);

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 32 && s[i] < 127)
			j += _putchar(s[i]);
		else if (s[i] > 14)
			j += _printf("\\x%X", s[i]);
		else
			j += _printf("\\x0%X", s[i]);
	}

	return (j);
}
