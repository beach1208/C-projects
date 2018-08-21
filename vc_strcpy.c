/* ************************************ */
/*                                      */
/* vc_strcpy.c                          */
/*                                      */
/* By: Juan, Kenta, Marla, Nagisa       */
/*                                      */
/* ************************************ */
char *ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}