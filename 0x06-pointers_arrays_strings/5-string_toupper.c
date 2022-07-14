#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to change
 *
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
				i++;
	}
	return (s);
}
