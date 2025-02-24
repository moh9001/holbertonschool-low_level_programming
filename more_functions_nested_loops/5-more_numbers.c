#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, ten times
 */
void	more_numbers(void)
{
	int	num;
	int	line;
	
	line = 0;
	while (line < 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		line++;
	}
}
