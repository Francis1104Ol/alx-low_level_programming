#include "main.h"
/**
 * _islower - a function that check for lower case.
 * @c: it is the integer paremeter of the function
 * Return: 0
 */
int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
