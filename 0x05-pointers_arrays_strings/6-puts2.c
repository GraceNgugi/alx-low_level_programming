#include "main.h"
/**
 *puts2 - a function that prints every other character of a string
 *starting with the first character
 * @str: the used string reference
 */
void puts2(char *str)
{
	int p = 0;

	while (str[p]  != '\n')
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
		p++;
	}
	_putchar('\n');
}
