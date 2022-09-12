#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty stule doc function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2
	/* your code goes there */
	if ( n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negaive\n", n);
	return (0);
}
