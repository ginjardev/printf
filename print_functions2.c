#include "main.h"

/**
 * print_oct - prints octal number
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_oct(unsigned int num)
{
	if (num <= 7)
		return (_putchar(num + '0'));
	else
		return (print_oct(num / 8) + _putchar(num % 8 + '0'));
}

/**
 * print_hex_cap - prints hex number in capital
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_hex_cap(unsigned int num)
{
	if (num <= 15)
	{
		if (num <= 9)
			return (_putchar(num + '0'));
		else
			return (_putchar(num + 'A' - 10));
	}
	else
	{
		if (num % 16 <= 9)
			return (print_hex(num / 16) + _putchar(num % 16 + '0'));
		else
			return (print_hex(num / 16) + _putchar(num % 16 + 55));
	}
	return (0);
}

/**
 * print_hex - prints hexadecimal number
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_hex(unsigned int num)
{
	if (num <= 15)
	{
		if (num <= 9)
			return (_putchar(num + '0'));
		else
			return (_putchar(num + 'a' - 10));
	}
	else
	{
		if (num % 16 <= 9)
			return (p_hex(num / 16) + _putchar(num % 16 + '0'));
		else
			return (p_hex(num / 16) + _putchar(num % 16 + 87));
	}
	return (0);
}

/**
 * print_bin - print binary number
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_bin(unsigned int num)
{
	if (num < 2)
		return (_putchar(num + '0'));
	else
		return (p_bin(num / 2) + _putchar(num % 2 + '0'));
}
