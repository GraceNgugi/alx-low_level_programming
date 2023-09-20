#include "main.h"
/**
 *_strcat -  a function that concatenates two strings
 *@src: source string pointer
 *@dest: destination string pointer
 *Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int length, p;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (p = 0; src[p] != '\0'; p++, length++)
	{
		dest[length] = src[p];
	}
	dest[length] = '\0';
	return (dest);
}
