#include "main.h"
/**
 * times_table - printing the 9 times table starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b <= 9; b++)
		{
			c = (a * b);

			if ((b / 10) > 0)
			{
				_putchar(' ');
			}

			else if (c < 9)
			{
				_putchar((c % 10) + '0');
			}
			else
				_putchar(' ')
	}
}
