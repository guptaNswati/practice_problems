#include <stdio.h>
#include <string.h>
int main()
{
	char s[5] = "Betty";
	int i, indx, tmp, frstVowel, chngd;

	frstVowel = 0;
	for (i = 0; s[i]; i++)
	{
		/* for finding first vowel */
		if (s[i] == 'e' && !frstVowel)
		{
			indx = i;
			frstVowel = 1;
			chngd = 0;
		}
		else if (s[i] == 'e' && frstVowel)
		{
			printf("enter in else\n");
			tmp = s[i];
			s[i] = s[indx];
			s[indx] = tmp;
			indx = i;
			chngd = 1;
		}
	}
	if (!chngd)
	{
		printf("[last saved] %d\n", indx);
		tmp = s[i - 1];
		printf("[tmp] %c\n", tmp);
		s[i - 1] = s[indx];
		s[indx] = tmp;
	}
	printf("[res] %s\n", s);
	return (0);
}
