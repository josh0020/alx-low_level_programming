#include "main.h"

/**
* print_diagonal - prints diagonal
* @n: input
* Return: void
*/

void print_diagonal(int n);
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(32);
		}
		_putchar(92);
		if  (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
