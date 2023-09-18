#include "main.h"
/**
 *_strlen - checks the length of the string
 *@s:the string to be checked
 *Return: string_length(success)
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
