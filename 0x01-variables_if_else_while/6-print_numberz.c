#include <stdio.h>

/**
 * main - entry point for start runtime
 *
 * Return: 0mwhen successful
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
