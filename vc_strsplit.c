/* ************************************ */
/*                                      */
/* vc_strsplit.c                        */
/*                                      */
/* By: Marla                            */
/*                                      */
/* ************************************ */
#include "libvc.h"

char **vc_strsplit(char const *s, char c)
{
    size_t start;
	size_t end;
	size_t i;
	size_t words;
	char **tab;

	words = 0;
	tab = '\0';
	i = 0;
	if (s && ((tab = (char **)malloc(sizeof(*tab) * (vc_strlen(s) / 2 + 2)))))
	{
		while (i < vc_strlen(s))
		{
			while (s[i] == c && s[i])
				i++;
			start = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			if ((end - start) > 0)
				tab[words++] = vc_strsub(s, start, end - start);
		}
		tab[words] = 0;
	}
	return (tab);
}
