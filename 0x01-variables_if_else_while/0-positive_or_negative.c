#include<stdlib.h>
#include<time.h>
#include <stdio.h>

/**
 * main -mDetermines if a number is positivite, nagative or zero
 *
 * Return Always 0 (Success)
 */

int main(void)
{
	int a;
	srand(time(0));
	a = rand() - RAND_MAX/2;
	if(a > 0)
	{
		printf("%d is positive\n", a);
	}
	else.if(a==0)
	{
		printf("%d is zero\n", a);
	}
	else
	{
		printf("%d is nagative\n" a);
	}
	return(0);

}
