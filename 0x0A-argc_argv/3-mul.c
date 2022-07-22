#include <stdio.h>
#include <stdlib.h>

/**
 * main - functions that multiiplies two number
 * @argv: argument value
 * @argc: argument count
 *
 * Return: 1 if error and 0 success
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
