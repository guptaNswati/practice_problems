#include <stdio.h>

/**
* main - Prints the largest number among three numbers
* Return: 0
**/

int main(void)
{
	int count, num1, num2, num3;
	num1 = 29;
	num2 = 21;
	num3 = 19;

	count = 0;
	while(count < 2)
	{
	if (num1 < num2)
	{
		num1 = num2;
		continue;
	}
	else if (num1 < num3)
	{
	num1 = num3;
	}
	
	count++;
	}
	
	printf("Largest number %d\n", num1);

	return (0);
}
	

