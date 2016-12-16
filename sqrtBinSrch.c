#include <stdio.h>

/**
* sqrtRecurs - finds sqrt of a number using binary search
**/
int sqrtRecurs(int n, int start, int end)
{
	long mid;

	/* to exit when the number does not have a natural sqrt  */
	if (end >= start)
	{
		printf("end is %d\n", end);
		printf("start is %d\n", start);
		mid = (start + end) / 2;
		if (mid * mid == n)
			return (mid);
		if (mid * mid > n)
			return (sqrtRecurs(n, start, mid - 1));
		if (mid * mid < n)
			return (sqrtRecurs(n, mid + 1, end));
	}
	printf("out end is %d\n", end);
	printf("out start is %d\n", start);
	return (-1);
}


/**
* _sqrt_recursion - finding the natural sqrt of a number, man sqrt
**/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	/* call sqrt which takes n, start and end */
	return (sqrtRecurs(n, 2, n/2));
}
/**
* main - test function
**/
int main()
{
	int r;

	r = _sqrt_recursion(8);
	printf("for 8 %d\n", r);
/*	r = _sqrt_recursion(25000000);
	printf("for 25000000 %d\n", r);
	r = _sqrt_recursion(2500000);
        printf("for 2500000 %d\n", r);
	r = _sqrt_recursion(-1);
	printf("for -1 %d\n", r);
	r = _sqrt_recursion(0);
	printf("for 0 %d\n", r);
	r = _sqrt_recursion(17);
	printf("for 17 %d\n", r); */
	return (0);
}
