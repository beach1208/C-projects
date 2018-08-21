// Juan Aguas
char *strrchr(char *str, int c)
{
    char *chr;

    chr = '\0';
    if (*str == (char)c)
    {
        chr = (char *)str;
    }
    while (*str)
    {
        if (*str == c)
        {
            chr = (char *)str;
        }
        str++;
    }
    if (c == '\0')
    {
chr = (char *)str;
    }        
    return (chr);
}
