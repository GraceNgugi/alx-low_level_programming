#include "main.h"
/**
 *_strncpy - a function that copies a string
 *@dest: destination of the pointer string
 *@src: source of the pointer string
 *@n: number of bytes to be used
 *Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count_bytes;

	for (count_bytes = 0; count_bytes < n && src[count_bytes] != '\0';
	count_bytes++)
	{
		dest[count_bytes] = src[count_bytes];
	}
	for (; src[count_bytes] < n; count_bytes++)
	{
		dest[count_bytes] = src[count_bytes] != '\0';
	}
	return (dest);
}
