#include <stdio.h>
/**
 * main - Sum multiple of 3 and 5 below 1000
 * Return: 0
 **/

int main(void)
{
	int nums, sum;
	sum = 0;

	for (nums = 3; nums < 1000; nums+)
	{
		if ((nums % 3 == 0) || (nums % 5 == 0)) 
		{
			sum = sum + nums;
		}
	}
	
	printf("sum is %d \n", sum);
	return (0);
 }
