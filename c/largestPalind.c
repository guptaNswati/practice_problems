#include <stdio.h>

/**
* digitCounter - counts digits of a number
* @n: number to be checked
* Return: number of digits
**/

int digitCounter(int n)
{
	int counter = 0;

	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

/**
* palidrome_check - checks if a given number is palindrome or not
* @n: number to be checked
* @m: number of digits in a number
* Return: 1 if number is palind
**/

int palidrome_check(int n, int m)
{
	int digit_1, digit_last, result;
	int j = m;
	int first_0 = 1;
	int forMod = 10;

	while (j > 1)
	{
		first_0 *= 10;
		j--;
	}

	digit_1 = n/first_0;
	digit_last = n%forMod;

	if (digit_1 == digit_last)
	{
		int loopM = m/2 - 1;

		while (m != loopM)
		{
			first_0 /= 10;
			forMod *= 10;
			digit_1 = (n/first_0) % 10;
			digit_last = (n%forMod)/(forMod/10);

			if (digit_1 == digit_last)
			{
				result = 1;
			}
			else
			{
				result = 0;
				break;
			}
			m--;
		}
		return (result);
	}
	else
		return (0);
}

/**
* main - finds the largest palindrome of product of 2 3 digit numbers
* Return: 0
**/

/* the largest multiple of 2 3digit numbers will have 6 digits so considering
 that, it will be even number of digits and all digits will have a common factor
 of 11. eg abccba = 100000a + 10000b + 1000c + 100c + 10b + a, adding the common 
 will have 11 common 

The palindrome can be written as:

abccba

Which then simpifies to:

100000a + 10000b + 1000c + 100c + 10b + a

And then:

100001a + 10010b + 1100c

Factoring out 11, you get:

11(9091a + 910b + 100c)

So the palindrome must be divisible by 11.  Seeing as 11 is prime, at least one
 of the numbers must be divisible by 11.

*/
int main(void)
{
/*	int number = 12345;
	int digits = digitCounter(number);
	int result = palidrome_check(number, digits);
	printf("result %d\n", result); */

	int num1, num2, product, digits, result;
	int largestP = 0;
	num1 = 999;

	while (num1 > 100)
	{
		num2 = 990;
		while (num2 > 100)
		{
			product = num1 * num2;

			digits = digitCounter(product);
			result = palidrome_check(product, digits);

			if (result == 1)
			{
				if (product > largestP)
				{
					largestP = product;
				}
/*				printf("result is %d\n", product); */

				break;
			}
			num2 -= 11;
		}
		num1--;
	}
	printf("largest P %d\n", largestP);
	return (0);
}
