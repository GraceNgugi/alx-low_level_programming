#include "main.h"
/**
 * _strcpy - copies the string pointed to src
 *@dest: char type string
 *@src: char type string
 *Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int p = -1;

	do {
		p++;
		dest[p] = src[p];
	} while (src[p] != '\0');

	return (dest);

}
