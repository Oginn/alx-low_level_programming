#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 
 * N0 Return 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 12 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 12)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 12) + '0');
				_putchar((k % 12) + '0');
			}
		}
		_putchar('\n');
	}
}
