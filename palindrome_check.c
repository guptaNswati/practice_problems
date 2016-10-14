/**
 * main - Checks if the number is palindrome or not
 * Return: 0
 **/

int main(void)
{
	int arraySize, n, temp;
	int number[] = {0,1,0,1,9};

	arraySize = sizeof(number) / sizeof(int);
	
	if (arraySize < 2)
	{
		puts("its not a palindrome number\n");
	}
	else if (arraySize == 2)
	{
		if (number[0] == number [1])
		{
			puts("its a palindrome number\n");
		}
		else
			puts("its not a palindrome number\n");
	}
	else
	{
		temp = arraySize / 2;
		for (n = 1; n <= temp; n++)
		{
			if (number[n-1] == number[arraySize-n])
			{
				puts("I am palindrome");
				continue;
			}
			else
			{
				puts("its not a palindrome number\n");
				break;
			}
		}
	}
	return (0);
}
