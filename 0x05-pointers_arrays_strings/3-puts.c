#include "main.h"
/**
 * _puts - functions that prints out a string
 * @str: the parameter of a character
 * Return: 0 if success
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	_putchar('\n');
}
