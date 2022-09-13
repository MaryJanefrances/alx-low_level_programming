#include<stdio.h>
#include<unistd.h>

/**
 * main - print exactly "and that piece of art is useful" *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is still usefull\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
