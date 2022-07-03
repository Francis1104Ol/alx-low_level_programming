#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int g, t;

	for (g = '0'; g < '9'; g++)
	{
		for (t = g + 1; t <= '9'; t++)
		{
			if (g != t)
			{
				putchar(g);
				putchar(t);

				if (g == '8' && t == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
