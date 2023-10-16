#include "main.h"

/**
 * print_int_arg - prints int variable argument
 * @ap: va_list object
 * Return: int
 */
int print_int_arg(va_list ap)
{
	return (print_int(va_arg(ap, int)));
}

/**
 * print_str_arg - prints string variable argument
 * @ap: va_list object
 * Return: string
 */
int print_str_arg(va_list ap)
{
	return (print_str_arg(va_arg(ap, char *)));
}

/**
 * print_char_arg - prints char variable argument
 * @ap: va_list object
 * Return: char
 */
int print_char_arg(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}