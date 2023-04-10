#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: converted string
 *
 * Return: int converted from the string
 */

int _atoi(char *s)

{
	int i, b, g, den, h, legit;

	i = 0;
	b = 0;
	g = 0;
	den = 0;
	h = 0;
	legit = 0;

	while (s[den] != '\0')
		den++;
	while (i < den && h == 0)
	{
		if (s[i] == '-')
			++b;
		if (s[i] >= '0' && s[i] <= '9')
		{
			legit = s[i] - '0';
			if (b % 2)
				legit = -legit;
					g = g * 10 + legit;
					h = 1;
					if (s[i + 1] < '0' || s[i + 1] > '9')
						break;
					h = 0;
		}
		i++;
	}

	if (h == 0)
		return (0);

	return (g);
}

/**
 * main -multiplies two numbers
 * @argc: argument number
 * @argv: argument array
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)

	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
