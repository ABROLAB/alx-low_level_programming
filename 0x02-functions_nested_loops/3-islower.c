#include "main.h"

/**
 * _islower - check for lowercase character
 * @a: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int a)
{
	if (a >= 97 && a <= 122)
	{
	return (1);
	}
	return (0);
}
