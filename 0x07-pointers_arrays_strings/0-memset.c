#include "main.h"
/**
 *_memset - a function that fills memory with a constant byte
 *@s:Starting address of memory to be filled
 *@n:the number of bytes to be changed
 *@b:the desired value
 *Return: the value to be returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
