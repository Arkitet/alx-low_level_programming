#include <stdio.h>
#include "main.h"

/**
 * main - program name to be printed
 * @argc: argument number
 * @argv: argument arrays
 *
 * Return: 0 always
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
