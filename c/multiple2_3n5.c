#include <stdio.h>
/**
 * main - Sum multiple of 3 and 5 below 1000
 * Return: 0
 **/

int main(void)
{
	int nums, sum3, num5, sum5, num15, sum15, result;
	nums = 3;
	sum3 = 0;
	num5 = 5;
	sum5 = 0;
	num15 = 15;
	sum15 = 0;
	result = 0;

        while (nums < 1000)
	{
		sum3 += nums;
		nums += 3;
	}
	while(num5 < 1000)
	{
		sum5 += num5;
		num5 += 5;

	}
	while(num15 < 1000)
	{
		sum15 += num15;
		num15 += 15;
	}

	result = (sum3 + sum5) - sum15;
	printf("sum is %d \n", result);
	return (0);
 }
