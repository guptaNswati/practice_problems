/**
* program that multiplies two positive ints without uisng '*'
**/

#include <stdio.h>
#include <stdlib.h>

int squar(int a)
{
	int b;

	if (a == 0 || a == 1)
		return (a);
	/* divide the number into half and collect the half */
	b = a>>1;
	/* check if n is odd, call itself passing half squared, adding double of half and remainder */
	if (a & 1)
		return ((squar(b)<<2) + b<<1 + 1);
	else
		/* keep squaring */
		return (squar(b)<<2);
}

int constMul(int a, int b)
{
	int res = 0;

	while (b != 0)
	{
		/* if b is odd, add the */
		if (b & 1)
			res += a;
		/* double add */
		a <<= 1;
		/* half b */
		b >>= 1;
	}
	return (res);
}

int mul_noMul(int a, int b)
{
	int res;

	if (a < b)
		/* res = a^2 + ac  */
		res = squar(a) + constMul(a, b - a);
	else if (a > b)
		/* res = b^2 + bc */
		res = squar(b) + constMul(b, a - b);
	else
		/*res = a^2 */
		res = squar(a);
	return res;
}

int recur_noMul(int a, int b)
{
	if (a == b)
		return (squar(a));
	if (a > b)
		return (recur_noMul(b, b) + constMul(b, a-b));
	else
		return (recur_noMul(a, a) + constMul(a, b-a));
}

int main()
{
	printf("[res] %d\n", mul_noMul(2, 3));
	printf("[res] %d\n", recur_noMul(2, 3));
	return (0);
}
