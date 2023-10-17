#include "main.h"

/**
 * _printf - prints string format to stdout
 * @format: string input
 * Return: length of format
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i, count;

	count = 0;
	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			count += print_option(format[i + 1], ap);
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(ap);
	return (count);
}
