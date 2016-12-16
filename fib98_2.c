int main(void)
{
	int first_count, second_count;
	long int num1, num2, divide_1, divide_2, fib_num, fib_divide;

	divide_2 = 1;
	fib_num = 2;
	num1 = 0;
	num2 = 0;
	first_count = 2;
	second_count = 0;

	printf("%li, %li, ", divide_2, fib_num);
	while (first_count < 98)
	{
		fib_divide = divide_2 + fib_num;
		if ((fib_divide / 10000000) > 0)
		{
			printf("fib divide / 1 million: %li\n", fib_divide / 10000000);
			second_count = fib_divide / 10000000;
				printf("second count is %d\n", second_count); 
			fib_divide = fib_divide % 10000000;
				printf("fib divide %li\n", fib_divide); 
		}

		divide_1 = num1 + num2 + second_count;
		printf("num1 is %li\n", num1);
		printf("num2 is %li\n", num2);
			printf("divide_1 is %li\n", divide_1); 

		if (divide_1 > 0)
			printf("%li%09li", divide_1, fib_divide);
		else
			printf("%li", fib_divide);

		num1 = num2;
		num2 = divide_1;
		divide_2 = fib_num;
		fib_num = fib_divide;
		second_count = 0;

		/*	if (first_count < 97) */
			printf("\n");

		first_count++;
	}
	printf("\n");
	return (0);
}
