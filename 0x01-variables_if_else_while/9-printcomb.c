#include<stdio.h>

/**
 *main - print all possible combinations of single-digit numbers
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		if (d !=57)
		{
			putchar(',');
			putchar('*');
		}
		d++;
	}
	putchar('\n');

	return (0);
}
