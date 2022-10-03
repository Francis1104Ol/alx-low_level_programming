#include "main.h"
/**
 *_strlen - functions that returns the length of a string.
 * @s: a character and a parameter
 * Return: 0 if success
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
