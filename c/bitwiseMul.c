#include <stdio.h>

/**
* main - multiply two numbers using bitwise operators for russian peasant algo
**/
int main()
{
	unsigned int num1, num2;
	long long result;

	num1 = 48;
	num2 = 12;
	result = 0;
	while (num2 > 0)
	{
		/* if num2 is odd, add num1 to result */
		if (num2 & 1)
			result += num1;
		num1 = num1 << 1; /* multiply num1 by 2 or double num1 */
		num2 = num2 >> 1; /* divide num2 by 2 or half num2 */
	}
	printf("%lld\n", result);
	printf("%d\n", 1 * (1 << 1));
	printf("%d\n", 2 * (1 << 2));
	printf("%d\n", 1 << 3);
	printf("%d\n", 1 << 4);
	return (0);
}
