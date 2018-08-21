/* ************************************ */
/*                                      */
/* vc_putendl.c                         */
/*                                      */
/* By: Marla                            */
/*                                      */
/* ************************************ */
#include "libvc.h"

void vc_putendl(char const *s)
{
	char *tmp;
	int len;

	if (!s)
		write(s, "\n", 1);
	len = ft_strlen(s);
	tmp = ft_strnew(len + 1);
	tmp = ft_memcpy(tmp, s, len + 1);
	tmp[len] = '\n';
	write(s, tmp, len + 1);
	vc_strdel(&tmp);
    
    return(s, 1);
}
