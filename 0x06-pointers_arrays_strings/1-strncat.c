#include "main.h"
/**
 *_strncat -  a function that concatenates two strings
 *@dest: destination of string pointer
 *@src: source of string pointer
 *@n: number of bytes to be concatenated
 *Return: Pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, p;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (p = 0; p < n && src[p] != 0; p++, length++)
	{
		dest[length] = src[p];
	}
	dest[length] = '\0';
	return (dest);
}
