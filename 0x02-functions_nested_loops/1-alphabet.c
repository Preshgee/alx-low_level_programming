#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char w = 'a';

	while (w <= 'z')
	{
		_putchar(w);
		w++;
	}
	_putchar('\n');
}
