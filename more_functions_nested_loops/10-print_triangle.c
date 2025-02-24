#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of '#' characters
 * @size: the size of the triangle
 */
void	print_triangle(int size)
{
	int	row;
	int	spaces;
	int	hashes;

	if (size > 0)
	{
		row = 1;
		while (row <= size)
		{
			spaces = size - row;
			hashes = row;
			while (spaces > 0)
			{
				_putchar(' ');
				spaces--;
			}
			while (hashes > 0)
			{
				_putchar('#');
				hashes--;
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
