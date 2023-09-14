#include "main.h"

/**
 *jack_bauer - a function that prints every minute of the day of Jack Bauer
 *starting from 00:00 to 23:59
 *Return: the last digit
 */

void jack_bauer(void)
{
	int hour, minute;

	hour = 0;
	minute = 0;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}