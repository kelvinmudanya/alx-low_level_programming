#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */

in _putchar(char c)
{
	char[] alp = "_putchar";

	for (c = 0; c < strlen(alp); c++)
	{
		putchar(alp[c]);
	}
	putchar("\n");

	return (0);
}
