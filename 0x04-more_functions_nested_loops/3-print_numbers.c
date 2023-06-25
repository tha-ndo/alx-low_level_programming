#include "main.h"

/**
 * print_numbers - function that prints the numbers from 0 to 9 using putchar
 * Return: 0 (Achieved)
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n')
}
