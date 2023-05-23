#include<main.h>
#include<stdio.h>
/**
 * main - entry point
 * write function to print alphabet lowercase followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char printAlphab = 'a';

	while (printAlphab <= 'z')
	{
		putchar(printAlphab);

		printAlphab++;
	}
	putchar('\n');

	return (0);
}
