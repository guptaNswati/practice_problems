#include <stdio.h>

/**
* main - prints sum of multiples of 3 and 5 below 1000
* Return: 0
**/

int main (void)
{
	int num3, sum;

	num3 = 3;
	sum = 0;

	while (num3 < 1000)
	{
		if (num3 % 3 == 0 || num3 % 5 == 0)
		{
			sum += num3;
		}
		num3++;
	}
	printf("sum  is %d\n", sum);
}
