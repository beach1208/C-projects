/* ************************************ */
/*                                      */
/* vc_strlen.c                          */
/*                                      */
/* By: Nagisa, Marla, Kenta and Juan    */
/*                                      */
/* ************************************ */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

size_t vc_strlen(const char *s)
{
	char *tmp;

	if (!s)
		return (0);
	tmp = (char *)s;
	while (*tmp)
		++tmp;
	return (tmp - s);
}

