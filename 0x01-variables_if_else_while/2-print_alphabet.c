#include<stdio.h>
/**
 *main - Entry point
 *Description: 'Print alphabet lowercase'
 *Return: 0 (success)
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
		putchar('\n');
		return (0);
}
