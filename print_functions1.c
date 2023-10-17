#include "main.h"

/**
 * _putchar - writes character to stdout
 * @c: character parameter
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * exponential - a to the power of b
 * @a: base number
 * @b: exponent
 * Description: calcuates a^b
 * Return: a^b
 **/
int exponential(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);

	return (a * exponential(a, b - 1));
}

/**
 * print_int - prints number to stdout
 * @num: number parameter
 * Return: number of characters printed
 */
int print_int(int num)
{
	int size, digit, result;
	long count, sign;

	sign = 1;
	digit = 0;
	size = 1;
	count = num;
	result = 0;

	if (number < 0)
	{
		_putchar('-');
		sign = -1;
		count *= sign;
		result++;
	}

	for (; count >= 10; size++)
	{
		count = counter / 10;
	}

	count = sign * (long)number;

	while (size >= 2)
	{
		digit = (count / exponential(10, size - 1));
		_putchar(digit + '0');
		count = count % exponential(10, size - 1);
		size--;
		result++;
	}
	_putchar(count % 10 + '0');
	result++;
	return (result);
}

/**
 * print_unsigned_int - prints unsigned int to stdout
 * @num: unsigned int parameter
 * Return: number of characters printed
 */
int print_unsigned_int(unsigned int num)
{
	if (num <= 9)
		return (_putchar(num + '0'));
	else
		return (print_unsigned_int(num / 10) + _putchar(num % 10 + '0'));
}

