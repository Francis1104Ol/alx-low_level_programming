#include "main.h"

/**
 * _puts - functions that prints out a string
 * @str: the parameter of a character
 * Return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_put(str[i]);
	}
	_putchar('\n');
}
