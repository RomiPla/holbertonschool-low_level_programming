#include "main.h"

/**
  * print_square - Prints n squares according n number of times
  * @size: The number of squares/number of times
  *
  * Return: empty
  */
void print_square(int size)
{
	int eapa, eepa;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (eapa = 0; eapa < size; eapa++)
		{
			for (eepa = 0; eepa < size; eepa++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
