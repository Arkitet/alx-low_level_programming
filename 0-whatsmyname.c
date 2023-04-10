#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of program
 * @argc: argument number
 * @argv: argument arrays
 *
 * Return:  0 Always
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);
}
