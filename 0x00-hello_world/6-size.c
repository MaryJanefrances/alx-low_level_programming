#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %lli byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lli byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return(0);
}

