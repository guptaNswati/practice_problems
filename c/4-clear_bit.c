#include <stdio.h>
#include <stdlib.h>

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	unsigned int count;

	m = n[0];
	count = 0;
	while (m != 0)
	{
		if (index == count && m & 1)
		{
			*(n + index) = 0;
			return (1);
		}
		m >>= 1;
		count++;
	}
	return (-1);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 0;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	clear_bit(&n, 1);
	printf("%lu\n", n);
	return (0);
}
