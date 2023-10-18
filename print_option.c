#include "main.h"

/**
 * print_option - prints variable length arguments by format
 * @format: string format
 * @choice: char_option array of struct
 * @ap: argument pointer
 * Return: number of characters
 */
int print_option(const char *format, char_option choice[], va_list ap)
{
	int i = 0,  counter = 0;
	int j;

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%' && format[i + 1] != '\0')
		{
			int character_found = 0;

			for (j = 0; choice[j].character !=  '\0'; j++)
			{
				if (format[i + 1] == choice[j].character)
				{
					character_found = 1;
					counter += choice[j].print_arg(ap);
					i++;
					break;
				}
			}
			if (!character_found)
				counter += _putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			counter += _putchar('%');
			i++;
		}
		else if (format[0] == '%' && format[1] == '\0')
		{
			return (-1);
		}
		else
			counter += _putchar(format[i]);
		i++;
	}
	return (counter);
}

