#include<stdio.h>
/**
 *main - Entry point
 *Description - 'Printthe alphabet in lowercase and uppercase'
 *Return: 0 (success)
 */
int main(void)
{
	int b = 97;
	int c = 65;

	while (b <= 122)
	{
		putchar(b);
	}
	while (c <= 90)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
