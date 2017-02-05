#include <stdio.h>

/**
 * calculates the length of a given string
 **/
int main(void)
{
	char *s = "hello, world";
	char *f = "lh";
	int i, j, len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (f[j] !='\0')
		{
			if (s[i] == f[j])
			{
				printf("j %d\n", j);
				/* not compare the null chracters */
				break;
			}
			j++;
		}
		/* if the j dint reach to null char, we knowwe had a match */
		if (f[j] != '\0')
			len++;
		else
		        break; /* return len, could not find the string */
		i++;
	}
       	printf("%d\n", len);
	return (0);
}
