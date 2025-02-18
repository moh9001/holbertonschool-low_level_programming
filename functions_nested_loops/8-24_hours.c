#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0'); /* Print first digit of hour */
			_putchar((hour % 10) + '0'); /* Print second digit of hour */
			_putchar(';');
			_putchar((minute / 10) + '0'); /* print first digit of a minute */
			_putchar((minute % 10) + '0'); /* print second digit of minute */
			_putchar('\n');
		}
	}
}
