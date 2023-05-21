#include<stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char aph;

	for (aph = 'a'; aph <= 'z'; aph++)
	{
		putchar(aph);
	}
	putchar("\n");
	return (0);
}
