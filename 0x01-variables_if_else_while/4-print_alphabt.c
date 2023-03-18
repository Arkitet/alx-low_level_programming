#include <stdio.h>

/**
 * main - entry point to start a runtime
 *
 * Return: 0when successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
		return (0);
}
