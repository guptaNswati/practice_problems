#include <stdio.h>

/**
* sumRec - finds array indices who have sum equal to target
* Return: nothing
**/
void sumRec(int a[], int len, int target)
{
	if (len <= 2)
	{
		if(a[len - 2] + a[len - 1] == target)
			printf("%d, %d\n", a[len - 2], a[len - 1]);
	}
	else
		return (sumRec(a, len - 2, target));
}
int main()
{
	int a[]
	sumRec()
