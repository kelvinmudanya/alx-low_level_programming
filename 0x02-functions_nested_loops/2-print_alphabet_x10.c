#include "main.h"

/**
 * main - check the code
 * 
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			putchar(b);
		}
		putchar('\n');
	}
}
