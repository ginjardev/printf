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
	return (print_address(va_arg(ap, void *)));
}

