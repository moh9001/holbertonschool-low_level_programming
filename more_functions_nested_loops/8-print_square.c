#include "main.h"

/**
 * print_square - prints a square of '#' characters
 * @size: the size of the square
 */
void	print_square(int size)
{
	int	row;
	int	col;

	if (size > 0)
	{
		row = 0;
		while (row < size)
		{
			col = 0;
			while (col < size)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
			row++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
