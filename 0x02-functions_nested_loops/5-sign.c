#include "main.h"
/**
 * print_sign - prints the function of  sign of a number
 * @n: parameter of numbers
 * Return: 1 if (+), 0 if (0) and -1 if (-n)
 */

int print_sign(int n)
{


	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
