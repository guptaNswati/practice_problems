#include <stdio.h>

/**
* main - detects if ubuntu is big endian or little endian
**/
int main()
{
	int num, i;
	char * adrs;

	printf("%u\n", (unsigned int)101);
/*	num = 0x01234567;
	adrs = (char *)&num;
	for (i = 0; i < sizeof(int); i++)
	{
		printf("%.2x\n", adrs[i]);
	}
	printf("%p\n", adrs);
	num = 3;
	adrs = (char *)&num;
	printf("%c\n", *adrs+48);
	if (*adrs)
		printf("Little endian\n");
	else
	printf("Big endian\n"); */
	return (0);
}
