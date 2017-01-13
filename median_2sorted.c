#include <stdio.h>

int findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
	int i, j, numElements, median;

	if (nums1Size == 0)
	{
		if (nums2Size % 2 == 0)
			median = (nums2[(nums2Size / 2) - 1] + nums2[nums2Size / 2]) / 2;
		else
			median = nums2[nums2Size / 2];
		return (median);
	}
	if (nums2Size == 0)
	{
		if (nums1Size % 2 == 0)
			median = (nums1[(nums1Size / 2) - 1] + nums1[nums1Size / 2]) / 2;
		else
			median = nums1[nums1Size / 2];
                return (median);
	}
	numElements = (nums1Size + nums2Size) / 2;
	i = j = 0;
	while (numElements > 0)
	{
		if (nums1[i] == nums2[j])
		{
			median = nums1[i];
			if (nums1 && nums2)
			{
				nums1[i++];
				nums2[j++];
			}
		}
		if (nums1[i] < nums2[j])
		{
			median = nums2[j];
			if (nums1)
				nums1[i++];
		}
		else if (nums1[i] > nums2[j])
		{
			median = nums1[i];
			if (nums2)
				nums2[j++];
		}
		else
			i++;
		numElements--;
	}
	return (median);
}

int main()
{
	int res;
	int n1[6] = {1,3,4,5,7,14};
	int n2[9] = {2,3,6,8,9,10,11,12,13};

	res = findMedianSortedArrays(n1, 6, n2, 9);
	printf("[res %d]\n", res);
	return (0);
}
