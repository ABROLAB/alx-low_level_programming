#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
char ab;
int i;
i = 0;
while(i < 10)
{
	for (ab = 'a'; ab <= 'z'; ab++)
	{
		_putchar(ab);
	}
	_putchar('\n');
	i++;
}
}
