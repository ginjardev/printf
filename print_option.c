#include "main.h"

/**
 * print_option - prints variable length arguments by format
 * @c: format specifier
 * @ap: argument pointer
 * Return: number of characters
 */
int print_option(char c, va_list ap)
{
	int i;

	char_option choice[] = {
		{'c', print_char_arg},
		{'s', print_str_arg},
		{'d', print_int_arg},
		{'i', print_int_arg},
		{'u', print_uint_arg},
		{'x', print_hex_arg},
		{'X', print_hexcap_arg},
		{'o', print_oct_arg},
		{'b', print_bin_arg},
		{'\0', NULL},
	};

	for (i = 0; choice[i].character != '\0'; i++)
	{
		if (choice[i].character == c)
		{
			return (choice[i].print_arg(ap));
		}
	}
	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	else if (c == 'r')
	{
		print_str("%r");
		return (1);
	}
	return (0);
}
