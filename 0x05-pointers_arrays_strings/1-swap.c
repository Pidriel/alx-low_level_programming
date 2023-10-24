#include "main.h"

/**
 * swap_int - swap two integer
 * @a: value first integer
 * @b: value of second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
