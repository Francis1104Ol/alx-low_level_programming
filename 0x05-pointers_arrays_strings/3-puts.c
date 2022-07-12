#include "main.h"
/**
 * _puts - functions that prints out a string
 * @str: the parameter of a character
 * Return: 0 if success
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
