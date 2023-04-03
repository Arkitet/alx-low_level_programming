#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int g;
	int q;

	for (g = 0; g < 8; g++)
	{
		for (q = 0; q < 8; q++)
			_putchar(a[g][q]);
		_putchar('\n');
	}
}
