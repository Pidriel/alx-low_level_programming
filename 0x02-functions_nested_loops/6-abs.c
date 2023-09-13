#include "main.h"
/**
 * _abs - finds absolute value of a number
 *  @x: parameter (set of all integers, positive or nagative)
 *  Return: -x or x
 */
int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
