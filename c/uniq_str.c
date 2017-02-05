/**
* program to determine if a string has all unique chars
* Return: 1 if unique, else 0
**/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
* o(n^2) brute force way with given restrictions
* rest: no additional ds, no string manipulation
**/

int check_str1(char *s)
{
	int i, j;

	if (*s == '\0' || *(s + 1) == '\0')
		return (1);

	for (i = 0; i < strlen(s) - 1; i++)
	{
		for (j = i + 1; j < strlen(s); j++)
		{
			if (s[i] == s[j])
				return (0);
		}
	}
	return (1);
}

/**
* o(n) using hash map which will take o(n) space also
**/
int check_str2(char *s)
{
	int j;

        if (*s == '\0' || *(s + 1) == '\0')
                return (1);

/*	hashmap.add(s[0]); */
	for (j = 1; s[j]; j++)
	{
		/* if table already contains that character return 0 */
		/*	if (hashmap.contains(s[j]))
			return (0);
		 else add it
		 hashmap.add(s[j]); */
	}
	return (1);
}

/**
* o(n log n + n): sort the string, if string maniuplation is allowed
**/
int check_str3(char *s)
{
	int j;

	if (*s == '\0' || *(s + 1) == '\0')
		return (1);
/*	quick_sort(s); */
/* minor optimization would be to add if condition while sorting that return 0, if two elements are equal */
	for (j = 1; s[j]; j++)
	{
		if (s[j - 1] == s[j])
			return (0);
	}
	return (1);

}

/**
* o(n) time and o(1) constant space of 256bytes: create a boolean array for all unique chars in char system
**/
int check_str4(char *s)
{
	/* assuming the char system to be ascii */
	bool new[256];
	int j, chr;

	if (strlen(s) > 255)
		return (0);
	if (*s == '\0' || *(s + 1) == '\0')
                return (1);
	chr = (int)s[0];
	new[chr] = true;
	for (j = 1; s[j]; j++)
	{
		chr = (int)s[j];
		if (new[chr])
			return (0);
		new[chr] = true;
	}
	return (1);
}

int main()
{
	char *s = "";
	printf("[1] %d\n", check_str1(s));
	printf("[2] %d\n", check_str4(s));
	return (0);
}
