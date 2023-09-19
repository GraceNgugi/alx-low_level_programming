#include "main.h"
/**
 *rev_string - a function that reverses a string
 *@s: pointer pointing to the string
 */
void rev_string(char *s)
{
	int length, g, hlf;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	g = 0;
	hlf = length / 2;
	while (hlf--)
	{
		temp = s[length - g - 1];
		s[length - g - 1] = s[g];
		s[g] = temp;
		g++;
	}
}
