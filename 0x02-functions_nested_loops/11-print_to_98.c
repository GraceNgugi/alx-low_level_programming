#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98, followed by a new line
 *@n: is the character to be checked
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
	{
		if (x == 98)
		{
			_putchar ((x / 10) + '0');
			_putchar ((x % 10) + '0');
		}
		else if (x < 10)
		{
                       _putchar ((x % 10) + '0');
		       _putchar (',');
		       _putchar (' ');
		}
		else
		{
			_putchar ((x / 10) + '0');
			_putchar ((x % 10) + '0');
			_putchar (',');
			_putchar (' ');
		}
	}
	_putchar ('\n');
}
