/**
* program that finds the sub array having maximum sum
**/
#include <stdlib.h>
#include <stdio.h>

int max_subArray(int *arr, unsigned int strt, unsigned int end)
{
	int i, mid, lftsum, rgtsum, midsum, sum;

	if (arr == NULL)
		return (0);
	if (strt == end)
		return (arr[strt]);
	mid = (strt + (end - strt)) / 2;
	lftsum = max_subArray(arr, strt, mid);
	rgtsum = max_subArray(arr, mid + 1, end);

	/* calculate left & right sub array sum */
	/*	lftsum = rgtsum = 0;
	while (strt <= mid)
		lftsum += arr[strt++];
	while (strt < end)
	rgtsum += arr[strt++]; */

	/* array sum*/
	sum = 0;
	i = strt;
	while (i < end)
		sum += arr[i++];

	/* calculate mid array sum */
	midsum = arr[mid];
	i = mid - 1;
	mid++;
	while (i >= 0 && mid < end)
	{
		if (midsum + arr[i] > midsum)
		{
			midsum += arr[i];
			i--;
		}
		else if (midsum + arr[mid] > midsum)
		{
			midsum += arr[mid];
			mid++;
		}
		else
			i--, mid++;
	}
/*	sum = lftsum + rgtsum; */
	printf("[lftsum] %d\n", lftsum);
	printf("[rgtsum] %d\n", rgtsum);
	printf("[midsum] %d\n", midsum);
	printf("[sum] %d\n", sum);
	if (lftsum > rgtsum && lftsum > sum && lftsum > midsum)
		return (lftsum);
	if (rgtsum > lftsum && rgtsum > sum && rgtsum > midsum)
		return (rgtsum);
	if (midsum > sum)
		return (midsum);
	return (sum);
}

int main()
{
	int arr[9] = {2, -1, 0, 4, -1, 8, 1, -7, 20};
	printf("[res] %d\n", max_subArray(arr, 0, 9));
	return (0);
}
