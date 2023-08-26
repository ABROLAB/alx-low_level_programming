#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be search.
 * @accept: The set of bytes to be searched for.
 *
 * Return: if a set matched - a point to the matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
