#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
