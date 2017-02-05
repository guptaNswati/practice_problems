#include <stdio.h>
#include <math.h>

/**
* main - find and prints largest prime number 
* Return: 0
**/

int main(void)
{
	long d, largest_num;
	long number, root;

	number = 600851475143;
	root = sqrt(number);
	for (d = 2; d < root; d++)
	{
		if ((number % d) == 0)
		{
			largest_num = d;
			number = number / d;
			d = 1;
		}
	}
	largest_num = number;
	printf("%ld\n", largest_num);
	return (0);

}

/*
int main(void)
{
	long num1, num2, divisor, factor;

	divisor = 2;
	num2 = 600851475143;
	num1 = sqrt(600851475143);
	printf("num1 is %ld\n", num1);

	while (divisor < num1)
	{
		if (num2 % divisor == 0)
		{
			factor = divisor;
			num2 /= divisor;
			divisor = 2;
		}
		divisor++;
	}
	factor = num2;
	printf("Prime factor is %ld\n", divisor);
	printf("num2 inside if %ld\n", num2);

	return (0);
}
*/
