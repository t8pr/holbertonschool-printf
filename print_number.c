#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: number of characters printed
 */
int print_number(int n)
{
	unsigned int n1;
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		count += print_number(n1 / 10);

	count += _putchar((n1 % 10) + '0');
	return (count);
}
