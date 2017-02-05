/**
* program to check if given two strings, one is the permuation of the other
* return: 1 if permutation, else 0
**/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* sort both strings and check if they are equal
* o(2n log n + n) => o(n log n)
* return (0) if both strings will differ in length, so essentially n can represent both
**/

/**
* quick_sort with randomly piked pivot
**/
void quick_sort(char *s, int left, int r)
{
	if (left < r)
	{
		int i, j;
		char tmp, pivot;

		if (r == 1)
		{
			if (s[left] > s[r])
			{
				tmp = s[i];
				s[i] = s[r];
				s[r] = tmp;
			}
		}
		else
		{
			i = left;
			pivot = s[r/2];
			s[r/2] = s[r];
			/* put pivot in the last index */
			s[r] = pivot;
			j = r - 1;
			while (i < j)
			{
				while (s[i] < pivot)
					i++;
				while (s[j] > pivot)
					j--;
				if (i < j)
				{
					tmp = s[i];
					s[i] = s[j];
					s[j] = tmp;
				}
				/* all in place and they have crossed each other */
				else
					break;
			}
			/* put pivot back at right position */
			tmp = s[i];
			s[i] = s[r];
			s[r] = tmp;
			quick_sort(s, left, i - 1);
			quick_sort(s, i + 1, r);
		}
	}
}

int check_permutation(char *s1, char *s2)
{
	int j;

        /* null check */
	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	/* 1 letter check */
	if (*(s1 + 1) == '\0' && *(s2 + 1) == '\0' && (*s1 != *s2))
		return (0);

        /* if they have different lengths, they can not be permutation of each other */
	if (strlen(s1) != strlen(s2))
		return (0);

	quick_sort(s1, 0, strlen(s1) - 1);
	quick_sort(s2, 0, strlen(s2) - 1);

	for (j = 0; s1[j] && s2[j]; j++)
	{
		if (s1[j] != s2[j])
			return (0);
	}
	return (1);
}

/**
* hashmap: with o(n) time and o(n) space + o(k)-> for itearting on all keys to check their count
**/
int check_permt2(char *s1, char *s2)
{
	hashmap *table;
	int j;

	if (*s1 == '\0' || *s2 == '\0')
                return (0);
	/* 1 letter check */
        if (*(s1 + 1) == '\0' && *(s2 + 1) == '\0' && (*s1 != *s2))
                return (0);
/*       if they have different lengths, they can not be permutation of each other */
        if (strlen(s1) != strlen(s2))
                return (0);

	/* add elements of s1 to the map */
	for (j = 0, s1[j]; j++)
		table.add(s[j]);

	for (j = 0; s2[j]; j++)
	{
		/* check if the char is not in the map, means strings are not identical*/
		/* if a char is repeating, keep a counter in the map for each repeating char
		   and everytime that char is visited reduce its count,
		   eventaully check, count of all chars should be 0: marking its visit */
		if (!table.contains(s2[j]))
		    return (0);
		table.find(s2[j]->count--);
	}
	/* iterate on table to check count of all chars should be zero */
	return (1);
}

int main()
{
	char s1[5] = "hello";
	char s2[5] = "lehlo";

	printf("[s1] %s\n", s1);
	printf("[s2] %s\n", s2);

	printf("[res] %d\n", check_permutation(s1, s2));
	return (0);
}
