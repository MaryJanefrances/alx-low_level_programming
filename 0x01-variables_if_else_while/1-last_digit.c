#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_d;

	srand(time(0));
	n=rand() - RAND_MAX / 2;
	last_d = n % 10;
	if (last_d > 5)
		printf("Last digit of 98 is 8 and is greater than 5\n", n, last_d);
	else if (last_d < 6)
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n",n, last_d);
	else if(last_d == 0)
		printf("Last digit of 980 is 0 and is 0\n", n, last_d);
	return (0);
}
