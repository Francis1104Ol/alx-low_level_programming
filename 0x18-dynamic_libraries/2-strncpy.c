#include "main.h"
/**
 **_strncpy - Function
 *
 *Description: Copies a string
 *
 *@dest: pointer parameter of type char
 *@src: pointer parameter of type char
 *@n: parameter of type int, number of times to copy.
 *
 *Return: Returns char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
	dest[x] = src[x];
	x++;
	}
	while (x < n)
	{
	dest[x] = '\0';
	x++;
	}
	return (dest);
}
