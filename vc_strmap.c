#include <stdlib.h>

char *vc_strmap(char const *s, void (*f)(char))
{
	int	i;
	char *str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)malloc((vc_strlen(s) + 1) * sizeof(char));
	if (str)
	{
		while (s[i] != '\0')
		{
			str[i] = (*f)(s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}