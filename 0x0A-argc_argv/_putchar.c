#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c:Cgracter to print
 *
 * Return: 1 on success
 * On errot, -1 is returned
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
