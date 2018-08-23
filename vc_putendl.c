/* ************************************ */
/*                                      */
/* vc_putendl.c                         */
/*                                      */
/* By: Marla                            */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static size_t vc_strlen(const char *s)
{
	char *tmp;

	if (!s)
		return (0);
	tmp = (char *)s;
	while (*tmp)
		++tmp;
	return (tmp - s);
}

static char *vc_strnew(size_t size)
{
    char *str;
    if (size == 0)
        return ('\0');
    if  ((str = (char *)malloc((size + 1) * sizeof(char))) == '\0')
        return ('\0');
    ft_bzero(str, size + 1);
	free (str);    
}

static void *ft_memcpy(void *s1, const void *s2, size_t n)
{
	long	*ptr1;
	long	*ptr2;
	char	*cptr1;
	char	*cptr2;

	ptr1 = (long *)s1;
	ptr2 = (long *)s2;
	while (n >= sizeof(long))
	{
		*ptr1 = *ptr2;
		++ptr1;
		++ptr2;
		n -= sizeof(long);
	}
	cptr1 = (char *)ptr1;
	cptr2 = (char *)ptr2;
	while (n > 0)
	{
		*cptr1++ = *cptr2++;
		--n;
	}
	return (s1);
}

void vc_putendl(char const *s)
{
	char *tmp;
	int len;

	if (!s)
		write(s, "\n", 1);
	len = vc_strlen(s);
	tmp = vc_strnew(len + 1);
	tmp = vc_memcpy(tmp, s, len + 1);
	tmp[len] = '\n';
	write(s, tmp, len + 1);
	vc_strdel(&tmp);
    
    return(s, 1);
}
