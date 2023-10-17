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
			return (print_hex_cap(num / 16) + _putchar(num % 16 + '0'));
		else
			return (print_hex_cap(num / 16) + _putchar(num % 16 + 55));
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
			return (print_hex(num / 16) + _putchar(num % 16 + '0'));
		else
			return (print_hex(num / 16) + _putchar(num % 16 + 87));
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
		return (print_bin(num / 2) + _putchar(num % 2 + '0'));
}

/**
 * print_address - prints addres or pointer value
 * @ptr: pointer parameter
 * Return: number of address characters
 */
int print_address(const void *ptr)
{
	char addressStr[20];
	unsigned int start, end, j, i = 0;
	uintptr_t address = (uintptr_t)ptr;

	/* convert address to string */
	while (address > 0)
	{
		if (address % 16 < 10)
			addressStr[i++] = address % 16 + '0';
		else
			addressStr[i++] = address % 16 - 10 + 'a';
		address /= 16;
	}

	addressStr[i++] = 'x';
	addressStr[i++] = '0';

	/* reverse string */
	for (start = 0, end = i - 1; start < end; start++, end--)
	{
		char temp = addressStr[start];

		addressStr[start] = addressStr[end];
		addressStr[end] = temp;
	}

	/* print address */
	write(1, addressStr, i);

	return (i);
}
