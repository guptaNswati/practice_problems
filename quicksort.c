#include <stdio.h>

/**
* three-way median partition quick sort
**/
// A utility function to swap two elements
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int median_pivot(int a[], int s, int e)
{
	int cen = (s + e)/2;
	int tmp;

	if (a[cen] < a[s])
		swap(&a[cen], &a[s]);
	if (a[e] < a[s])
		 swap(&a[e], &a[s]);
	if (a[e] < a[cen])
	       	swap(&a[e], &a[cen]);
	/* swap the center and right most element to put pivot in last */
	swap(&a[cen], &a[e]);
	return (a[e]);
}
void quick_Sort(int arr[], int s, int e)
{
	if (s < e)
	{
		int i, j, pivot, tmp;
		i = s;
		j = e - 1;
		pivot = median_pivot(arr, s, e);
		while (i < j)
		{
			while (arr[i] < pivot)
				i++;
			while (arr[j] > pivot)
				j--;
			if (i < j)
			{
				printf("[arr %d] [i %d] [arr %d][j %d]\n",arr[i], i, arr[j], j);
				swap(&arr[i], &arr[j]);
			}
			else
				break;
		}
		/* place pivot at its right position */
	   swap(&arr[i], &arr[e]);
	   /* sort left subarray */
	   quick_Sort(arr, s, i - 1);
	   /* sort right subarray */
	   quick_Sort(arr, i + 1, e);
	}
}


/**
* Practice: quick sort: choose a pivot, put elements less than pivot in the left side
* and elements greater or equal on right side. keep calling the quick sort
* recursivley on both sides untill entire array is sorted.
* Ways to choose pivot: left most/ right most/ random/ median
* Worst case: n^2, average (n log n)
*
**/

void quick_sort(int arr[], int low, int high)
{
	int i, j, pivot, tmp;

	pivot = arr[low];
/* 4, 5, 13, 2, 7, 10  */
	j = 0;
	for (i = 1; i < high; i++)
	{
		if (arr[i] < pivot)
		{
			tmp = arr[j];
			arr[j++] = arr[i];
			arr[i] = tmp;
		}
	}
	tmp = arr[j + 1];
	arr[j + 1] = arr[high - 1];
	arr[high - 1] = tmp;
	for (i = 0; i < high; i++)
		printf("[arr[i]] %d\n",arr[i]);
/*	quick_sort(arr, low, j - 1);
	quick_sort(arr, j + 1, high); */
}

void quick(int a[], int l, int r)
{
	if (l < r)
	{
		int key = a[r - 1];
		int low = l;
		int high = r - 1;
		while (low <= high)
		{
			while (low <= high && a[high] >= key)
				high--;
			printf("[high after while] %d\n", high);
			a[low] = a[high];
			while (low <= high && a[low] <= key)
				low++;
			printf("[low after while] %d\n", low);
			a[high] = a[low];
		}
		a[low] = key;
	}
	int i;
	for (i = 0; i < r; i++)
                printf("[a[i]] %d\n",a[i]);
}

 
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
	int pivot = arr[high];    // pivot
	int i = (low - 1);  // Index of smaller element
	int j;
	for (j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
 
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		   at right place */
		int pi = partition(arr, low, high);
		int i;
		for (i = 0; i <= high; i++)
			printf("[a[i]] %d\n",arr[i]);
 
		// Separately sort elements before
		// partition and after partition
		/*	quickSort(arr, low, pi - 1);
			quickSort(arr, pi + 1, high); */
	}
}
int main()
{
	int arr[6] = {4, 5, 13, 2, 7, 10};
	quick_Sort(arr, 0, 5);
	int i;
	for (i = 0; i < 6; i++)
		printf("[a[i]] %d\n",arr[i]);
	return (0);
}
