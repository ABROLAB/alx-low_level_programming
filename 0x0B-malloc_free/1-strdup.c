#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success). NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[len] = '\0';
	return (duplicate);
}
