#include <stdio.h>

/**
* main - Prints different combinations of 4 digits
* Retrun: 0
**/

int main(void)
{
	int num1, num2, num3, num4;
	
	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = num1; num3 <= 57; num3++)
			{
				if (num3 == num1)
				{
					num4 = 48;
				}
				num4 = 49;
				
				for (num4 = num4; num4 <= 57; num4++)
				{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					putchar('\n');
				}
			}
		}
	}
	return (0);
}

					
