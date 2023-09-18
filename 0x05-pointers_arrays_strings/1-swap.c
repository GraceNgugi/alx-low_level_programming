#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 *@a: stores and swaps address of a.
 *@b: stores and swaps address of b.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
