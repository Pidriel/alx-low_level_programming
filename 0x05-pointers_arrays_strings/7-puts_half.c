#include "main.h"

/**
 * puts_half - prints half of string
 * @str:print parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int n, num = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		num++;
	n = (num - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
