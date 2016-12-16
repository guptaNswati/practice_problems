#include <stdio.h>

/**
* main - finds and prints 98 fib nums
* Return: 0
**/

int main(void)
{
	long num1, num2, num1_half, num2_half, fib_num, fib_half;
	int count1, count2;

	num1 = 1;
	num2 = 2;
	num1_half = 0;
	num2_half = 0;
	count1 = 2;
	count2 = 0;

	while (count1 < 98)
	{
		fib_num = num1 + num2;

		if ((fib_num / 10000000) > 0)
		{
			count2 = fib_num / 10000000;
			fib_num = fib_num % 10000000;
		}

		fib_half = num1_half + num2_half + count2;

		if (fib_half >  0)
		{
			printf("fib is %ld%ld\n", fib_half, fib_num);
		}
		else
		{
			printf("fib is %ld\n", fib_num);
		}

	        num1_half = num2_half;
		num2_half = fib_half;
		num1 = num2;
		num2 = fib_num;

		count2 = 0;
		count1++;
	}
	return (0);
}
