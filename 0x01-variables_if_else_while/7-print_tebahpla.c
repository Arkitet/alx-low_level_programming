#include<stdio.h>

/**
 * main - entry point
 *
 * Return: 0always when successful
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
