#include "main.h"
/**
 * _isalpha - functions that checks for alphabet character.
 * @c: it is an integer parameter of a function
 * Return: 1 if success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
