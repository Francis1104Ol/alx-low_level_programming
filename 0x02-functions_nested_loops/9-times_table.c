#include "main.h"
/**
 * times_table - printing the 9 times table starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{

		for (b = 1; b <= 9; b++)
		{
			c = (a * b);

			if ((c / 10) == 0)
			{
				if (b != 0)
				_putchar(' ');
			_putchar(c = '0');

			if (c == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			if (b == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
