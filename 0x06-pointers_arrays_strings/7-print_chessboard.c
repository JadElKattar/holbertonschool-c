#include "holberton.h"
/**
 *print_chessboard - chessboard printin
 *@a: chess board array
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; a[row][7]; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
