#include <stdio.h>

/**
* finds maximum number of zeros between two consecutive ones of given numbers binary rep
* e.g: n = 5 = 101, return zeros = 1, else -1 if there is less than 2 ones
**/
int zeros(int n)
{
	if (n == 0 || n == 1)
		return (0);

	int count, tmp, bin;

	count = tmp = 0;
	while (n != 0)
	{
		bin = n % 2;
		n = n / 2;
		if (bin == 1)
		{
			bin = 0;
			while (bin != 1 || n != 0)
			{
				bin = n % 2;
				n = n / 2;
				if (bin == 0)
					count += 1;
			}
			if (count > tmp && bin == 1)
			{
				tmp = count;
				count = 0;
			}
		}
	}
	return (tmp);
}

int main()
{
	int res = zeros(549);
	printf("[res] %d\n", res);
	res = zeros(1030);
	printf("[res] %d\n", res);
	res = zeros(47);
	printf("[res] %d\n", res);
	return (0);
}
