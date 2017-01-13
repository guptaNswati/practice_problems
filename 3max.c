#include <stdio.h>

int thirdmax(int *arr, int sz)
{
	int i, max1, max2, max3;

	if (sz == 0)
		return (0);
	if (sz < 2)
		return (arr[0]);

	if (arr[0] < arr[1])
	{
		max1 = arr[1];
		max2 = arr[0];
	}
	else
	{
		max1 = arr[0];
		max2 = arr[1];
	}
	if (sz < 3)
		return (max1);
	if (arr[2] > max2)
	{
		max3 = max2;
		max2 = arr[2];
		if (max2 > max1)
		{
			max2 = max1;
			max1 = arr[2];
		}
	}
	else
		max3 = arr[2];

	for (i = 3; i < sz; i++)
	{
		if (max3 < arr[i])
		{
			max3 = arr[i];
			if (max3 > max2)
			{
				max3 = max2;
				max2 = arr[i];
			}
			if (max2 > max1)
			{
				max2 = max1;
				max1 = arr[i];
			}
		}
	}
	return (max3);
}

int main()
{
	int result;
	int arr[6] = {10, 5, 9, 6, 7, 8};

	result = thirdmax(arr, 6);
	printf("[res] %d\n", result);
	return (0);
}
