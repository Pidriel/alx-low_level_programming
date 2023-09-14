#include "main.h"
/**
 * print_last_digit - funtion to print last digit of x
 * @x: set of all integers
 * Return: y
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
