#include "main.h"
#include <string.h>

/**
 *_strncat - concatenates two strings with a given number of bytes
 *@dest: string para
 *@src: second string para
 *@n: integer number of bytes
 *Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
