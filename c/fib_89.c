#include <stdio.h>

#define DIVIDE 1000000000

/** calculates first 98 fibonaccis **/

int main(void)
{
	long num1, num2, num1_divide, num2_divide, fib_num, fib_divide;
	int count_1, count_2;

	num1 = 1;
	num2 = 2;
	fib_num = 0;

	count_1 = 0;

	while (count_1 < 90)
	{
		fib_num = num1 + num2;
		num1 = num2;
		num2 = fib_num;
		
		if (fib_num > 10000000000000000000)
		{
			puts("overflow");
		}
		else
			printf("%ld\n", fib_num);
		count_1++;
	}	
}	
	
