#include "main.h"
/**
 *_strcmp - a function that compares two strings
 *@s1: string to be checked
 *@s2: string to be checked
 *Return: gives the comparison value
 */
int _strcmp(char *s1, char *s2)
{
	int a, compare_value;

	a = 0;
	while (s1[a] == s2[a] &&  s1[a] != '\0')
	{
		a++;
	}
	compare_value = s1[a] - s2[a];
	return (compare_value);
}
