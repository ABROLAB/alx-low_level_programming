#include "main.h"

/**
 * _lenght - checks the lenght of a string
 * @s: is the string
 * Return: return the lenght of the string
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}

/**
 *checkp - checks if the string is palindrome
 * @i: is the index
 * @lg: is the lenght of the string
 * @s: is the string
 * Retrun: l if is palindrome or if not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (i);
		}
	}
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: is the string
 * Return: return i if the string is a palindrome or if not 0
 */
int is_palindrome(int *s)
{
	return (checkp(0, _lenght(s) - l, s));
}
