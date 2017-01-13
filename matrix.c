#include <stdio.h>
#include <stdlib.h>

int searchMatrix(int **matrix, int matrixRowSize, int matrixColSize, int target) {
	int i = 0;
	int j;
	if(*matrix == NULL)
		return (-1);
	if (target < matrix[0][0])
		return (-1);

	while(*matrix)
	{
		printf("[*matrix] %d\n", *matrix[0]);
		j = 0;
		while(j < matrixColSize)
		{
			if(target == *matrix[j])
				return (1);
			j++;
		}
		matrix++;
	}
	return (-1);
}

int main()
{
	int matrix[1][1] = {{-5}};
	int target = -5;
	int rsz = 1;
	int csz = 1;
	int res = searchMatrix((int **)matrix, rsz, csz, target);
	printf("[res] %d\n", res);
	return (0);
}
