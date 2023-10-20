#include "main.h"

/**
 * print_hex_arg - prints hexadecimal
 * @ap: va_list object
 * Return: number of characters printed
 */
int print_hex_arg(va_list ap)
{
	return (print_hex(va_arg(ap, unsigned  int)));
}

/**
 * print_hexcap_arg - prints int variable argument
 * @ap: va_list object
 * Return: number of characters printed
 */
int print_hexcap_arg(va_list ap)
{
	return (print_hex_cap(va_arg(ap, unsigned int)));
}

/**
 * print_bin_arg - prints binary of number
 * @ap: va_list object
 * Return: number of characters printed
 */
int print_bin_arg(va_list ap)
{
	return (print_bin(va_arg(ap, unsigned int)));
}

/**
 * print_address_arg - prints memory address
 * @ap: va_list object
 * Return: number of address characters
 */
int print_address_arg(va_list ap)
{
	void *ptr;

	ptr = va_arg(ap, void *);
	if (ptr == NULL)
		return ("(nil)(nil)");

	return (print_address(ptr));
}

/**
 * print_rot13_arg - prints ROT13 coded string
 * @ap: va_list object
 * Return: number of characters printed
 */
int print_rot13_arg(va_list ap)
{
	char *str = va_arg(ap, char *);
	int a, b;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char beta[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (str == NULL)
	{
		str = "(null)";

		for (a = 0; str[a]; a++)
			_putchar(str[a]);

		return (a);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
		if ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z'))
		{
			for (b = 0; beta[b] != '\0'; b++)
			{
				if (str[a] == alpha[b])
				{
					_putchar(beta[b]);
					break;
				}
			}
		}
		else
			_putchar(str[a]);
	}
	return (a);
}

