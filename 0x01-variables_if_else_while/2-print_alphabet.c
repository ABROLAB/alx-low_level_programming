#include<stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letr[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letr(i));
	}
	putchar("\n");
	return (0);
}
