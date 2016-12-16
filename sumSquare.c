#include <stdio.h>

/**
* main - Find the difference between the sum of the squares of the first 
* one hundred natural numbers and the square of the sum.
* Return: 0
**/

int main(void)
{
	int num, sumSquare, squareSum, result;
	num = 100;

	/* dividing n by 2 and multiplying it with num+1 will 
	   give sum of squares of numbers */
	sumSquare = (num/2)*(num + 1);
	/* gives sum of squares of numbers  */
	squareSum = sumSquare * 67;
	/* squaring the sum */
	sumSquare *= sumSquare;

	result = sumSquare - squareSum;

	printf("difference is %d\n", result);
	return (0);
}
