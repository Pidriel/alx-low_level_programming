#include "main.h"

/**
 * _strlen - returns the lengthe of a string
 * @s: string
 * Return: length of string 
 */

int _strlen(char *s)
{
	int i;
	int num = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		num++;
	return (num);
}
