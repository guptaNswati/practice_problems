/**
* program that changes space cahr of a string with "%20"
**/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* o(n) space + o(n + n(for strlen) = 2n = n) time
**/
char *modify_str(char *s)
{
	int j, len;
	char *newS;

	if (*s == '\0')
		return (NULL);

	len = strlen(s);
	newS = malloc(sizeof(char) * len);
	if (newS == NULL)
		return (NULL);

	j = 0;
	while (j < len)
	{
		if (*s == ' ')
		{
			newS[j++] = '%';
			newS[j++] = '2';
			newS[j++] = '0';
		}
		else
			newS[j++] = *s;
		s++;
	}
	return (newS);
}

/**
* in place without allocating memory, books solution, looks wrong: ambiguous
**/

char *modify_str2(char *s)
{
	int j, newlen, spc_count;
	char *tmp, *cur;

	if (*s == '\0')
                return (NULL);

	/* count number of spaces */
	for (j = 0; s[j]; j++)
	{
		if (s[j] == ' ')
			spc_count++;
	}
	newlen = strlen(s) + spc_count * 2;
	s[newlen] = '\0';
	for (j = strlen(s) - 1; j >= 0; j--)
	{
		if (s[j] == ' ')
		{
			s[newlen - 1] = '%';
			s[newlen - 2] = '2';
			s[newlen - 3] = '0';
			newlen -= 3;
		}
		else
		{
			s[newlen - 1] = s[j];
			newlen--;
		}
	}
	return (s);
/*	while (s[len] == ' ')
		count++, len--;
	tmp = s;
	while (tmp)
	{
		if (*tmp == ' ')
		{
			cur = tmp;
			tmp = tmp + 1;
			len = strlen(tmp) - 1;
			while (len >= 0)
			{
				tmp[len] = tmp[len - j];
			}
		}
		} */

}

int main()
{
	char s[5] = "h w  ";
	printf("[newS] %s\n", modify_str2(s));
	return (0);
}
