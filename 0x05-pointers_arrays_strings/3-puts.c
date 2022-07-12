#include "main.h"
/**
 * _puts - functions that prints out a string
 * @str: the parameter of a character
 * Return: 0 if success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}
	_putchar('\n');

}
