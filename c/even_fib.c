#include <stdio.h>

/**
* main - prints sum of even fib nums
* Return: 0
**/

int main(void)
{
	int num1, num2, skip, fibnum, sum;

	num1 = 2;
	num2 = 3;
	fibnum = 0;
	sum = 2;

	while (fibnum <= 4000000)
	{
		skip = 0;
		while (skip < 2)
		{
			fibnum = num1 + num2;
		/*	if (fibnum % 2 == 0)
		{
			printf("sum before adding %d \n", fibnum);
			sum += fibnum;
			} */
			num1 = num2;
			num2 = fibnum;
			skip++;
		}
		printf("fibnum is %d\n", fibnum);
		sum += fibnum;
	}
	printf("sum is %d\n", sum);
}
