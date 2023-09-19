#include "main.h"
/**
 *print_rev -  a function that prints a string, in reverse
 *@s: string to be referenced
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
