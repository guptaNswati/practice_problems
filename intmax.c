#include <stdio.h>
int main(void)
{
	int a = -2147483648;
	int b = -1;
	int c = a + b;
	printf("%d\n", c);
	return (0);
}
