#include <stdlib.h>
#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif

/**
 * main - print file name
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
