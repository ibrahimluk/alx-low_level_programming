#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: number of times the character _ should be printed
 *Return: void
 */
 
void print_linear(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
