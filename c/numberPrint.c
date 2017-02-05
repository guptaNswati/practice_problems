#include "holberton.h"
#include <stdio.h>


/**
 * print_number - prints an integer using only putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	long int m;

	m = 0;
	if (n < 0)
	{
		_putchar('-');
		if (n < -10000000)
			m = n;
		else
			n = -n;
	}

	if ((n / 10) > 0 || (m / 10) != 0)
	{
		if (m != 0)
		{
			n = (int) -(m / 10);
			print_number(n);
		}
		else
		{
			print_number(n / 10);
		}
	}
	if (m != 0)
		_putchar('0' - m % 10);
	else
		_putchar('0' + n % 10);
}
