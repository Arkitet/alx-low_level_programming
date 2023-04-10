#include <stdio.h>
#include "main.h"

/**
 * main - print  number of passed arguments
 * @argc: argument number
 * @argv: argument array
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
