#include <stdio.h>
#include <stdlib.h>

/**
* kadanes max sum subarray in o(n)
**/

int kadaneMaxSubArr(int *arr, int len)
{
	int i, j, maxSm, smSofar, strtindx, endindx;

	smSofar = arr[0];
	maxSm = strtindx = endindx = 0;
	for (i = 1; i < len; i++)
	{
		smSofar += arr[i];
		if (smSofar > maxSm)
		{
			maxSm = smSofar;
			endindx = i;
		}
		else if (smSofar < 0)
		{
			smSofar = 0;
			strtindx = i + 1;
		}
	}
	printf("{max starts at %d = %d}\n", strtindx, arr[strtindx]);
	printf("{max ends at %d = %d}\n", endindx, arr[endindx]);
	return maxSm;
}

int main()
{
	int arr[10] = {-1, 0, 9, 11, -6, 10, 0, -10, 4, -5};
	printf("[res] %d\n", kadaneMaxSubArr(arr, 10));
	return (0);
}
