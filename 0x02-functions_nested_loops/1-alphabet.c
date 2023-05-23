#include "main.h"

/**
 * print_alphabet - print the alphabet
 * write function to print alphabet lowercase followed by new line
 * Return: void
 */
void print_alphabet(void)
{
	char alphab = 'a';

	while (alphab <= 'z')
	{
		_putchar(alphab);

		alphab++;
	}
	_putchar('\n');
}
