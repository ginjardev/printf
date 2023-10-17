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
 * _strlen - finds length of string
 * @str: pointer to string or char array
 * Return: length of string
 */
int _strlen(char *str)
{
	unsigned int count = 0;

	while (*str != '\0')
	{
		++count;
		++str;
	}
	return (count);
}

/**
 * print_str - writes string to stdout
 * @str: string pointer or char array
 * Return: string length
 */
int print_str(char *str)
{
	unsigned int i, length = _strlen(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (length);
}

/**
 * print_int - prints number to stdout
 * @num: number parameter
 * Return: number of characters printed
 */
int print_int(int num)
{
	char buffer[20]; /* assume buffer size 20 */
	int i = 0;
	int isNegative = 0;
	int counter = 0;

	/* handle negative number */
	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}

	/* handle 0 */
	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = num % 10 + '0';
			num /= 10;
		}
	}

	if (isNegative)
	{
		buffer[i++] = '-';
	}

	/* print number characters in reverse */
	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		counter++;
	}

	return (counter);

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
