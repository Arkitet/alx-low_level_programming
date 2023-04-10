#include <stdio.h>
#include "main.h"

/**
 * main - prints received arguments
 * @argc: argument number
 * @argv: argument array
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
