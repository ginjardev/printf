#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i = _printf("%d disciples %s and %c here.\n", 12, "of", 'J');
	printf("%d\n", i);
	puts("");
}
