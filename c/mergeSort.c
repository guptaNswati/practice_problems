#include <stdlib.h>
#include <stdio.h>

void merge_sort(int *arr, int strt, int end)
{
	if (strt < end)
	{
		int mid, *arr1, *arr2, i, j, k;

		mid = (strt + (end - strt))/2;

		arr1 = malloc(sizeof(int) * mid);
		arr2 = malloc(sizeof(int) * (end - mid) + 1);
		i = 0;
		while (i <= mid)
			arr1[i++] = arr[i++];
		i = mid + 1;
		while (i <= end)
			arr2[i++] = arr[i++];
		merge_sort(arr1, strt, mid);
		merge_sort(arr2, mid + 1, end);
		/* merge routine */
		i = j = k = 0;
		while (arr1[i] && arr2[j])
		{
			if (arr1[i] > arr2[j])
				arr[k++] = arr2[j++];
			else if (arr2[j] > arr1[i])
				arr[k++] = arr1[i++];
			/* here both are equal so add from left and increment both */
			else
			{
				arr[k++] = arr1[i];
				i++, j++;
			}
		}
/*		free(arr1);
		free(arr2); */
	}
}

int main()
{
	int arr[] = {4, 2, 1, 8, 0, -1, 11, 6, 3, 22, 15, 8, 19};
	merge_sort(arr, 0, 12);
	printf("%d\n", arr[0]);
	return (0);
}
