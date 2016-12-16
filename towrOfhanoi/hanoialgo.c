#include <stdio.h>

/**
* A simple C program that solves tower of hanoi puzzle for n disks in
* 2^n - 1 steps
* @Origin: Also called Tower of Brahma (assocaited with Indian legend) or
* Lucas' Tower (inventd by French mathematician Édouard Lucas in 1883)
* @Constraints: 1. Only one disk can be moved at a time.
* 2. Only the "top" disk can be removed
* 3. No disk can be placed on top of a smaller disk.
*
*/

/**
* recursive solution to tower of hanoi puzzle
**/
void towrofHanoi(int n, char from, char inbetwn, char to)
{
        /* base case: if 1 disk, move from to */
        if (n == 1)
        {
                printf("Moving disk %d from %c to %c \n", n, from, to);
                return;
        }
        towrofHanoi(n-1, from, to, inbetwn);
        printf("Moving disk %d from %c to %c \n", n, from, to);
        towrofHanoi(n-1, inbetwn, from, to);
}
/**
* iterative solution using bitwise
**/
void towr_of_hanoi(int n)
{
	int m;

	for (m = 1; m < (1 << n); m++)
		printf("Moving disk from %d to %d\n", (m & m - 1) % 3,
		       ((m | m - 1) + 1) % 3);
}
/**
* main - for testing
**/
int main()
{
	int n;

	n = 3;
	printf("Recursive Solution: \n");
	towrofHanoi(n, 'M', 'F', 'W');
	printf("-----------------------------------------------------------\n");
	printf("Iterative Solution: \n");
	towr_of_hanoi(n);
	return (0);
}

/**
Result of run:
Recursive Solution:
Moving disk 1 from M to W
Moving disk 2 from M to F
Moving disk 1 from W to F
Moving disk 3 from M to W
Moving disk 1 from F to M
Moving disk 2 from F to W
Moving disk 1 from M to W
-----------------------------------------------------------
Iterative Solution:
Moving disk from 0 to 2
Moving disk from 0 to 1
Moving disk from 2 to 1
Moving disk from 0 to 2
Moving disk from 1 to 0
Moving disk from 1 to 2
Moving disk from 0 to 2
**/
