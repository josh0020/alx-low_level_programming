#include "main.h"

/**
* print_diagonal - prints diagonal
* @a: input
* @b: input
* Return: void
*/

void print_diagonal(int n);
{
        int a,b ;

        for (a = 0; a < n; a++ )
        {
                for (b =0;b < a;b++)
		{
			-putcchar(32);
		}
		_putchar(92);
        }
        _putchar('\n');
}
