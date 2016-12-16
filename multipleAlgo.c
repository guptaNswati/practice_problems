#include <stdio.h>
#include <math.h>

/* prime number algo */

int main(void)
{
	long number = 124;
	int prime = 2;

	while (prime < number)
	{
		if (number % prime == 0)
		{
			prime = prime;
			number /= prime;
			prime = 1;
		}
		prime++;
	}
	printf("largest prime is %ld\n", number);
	return (0);
}
			
	
