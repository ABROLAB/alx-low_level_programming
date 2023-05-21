#include<stdio.h>

/**
 *main - Entry point
 *print the alphabet in lowercase followed by a new line, except q and e
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		if (ab != 'e' && ab != 'q')
			putchar(ab);
	}
	putchar('\n');

	return (0);
}
