#include <stdio.h>

/**
* main - finds smallest positive number that is evenly divisible 
* by all of the numbers from 1 to 20?
* Return: 0
**/

int main(void)
{
	int smallest_20, smallest_10, count;
	/* smallest number divisible by 1 to 10 */
	smallest_10 = 2520;
	smallest_20 = smallest_10 * 11;
	count = 13;

	while (count < 20)
	{
		if (smallest_20 % count != 0)
		{
				smallest_20 *= count;
		}
		count++;
	}
	/* because number is multiplied by 16 and is already divisible by 8, 
	   so needs to divide by 8 to take out extra multiple of 8 */
	printf("smallest number is %d\n", smallest_20 / 8);
	return (0);
}

		

