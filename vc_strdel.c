#include <stdio.h>
#include <stdlib.h>

void vc_strdel(char **as)
{
    free(as);
    as[0] = '\0';
}

int main()
{
    char *c = "hello world";
    char **cp = &c;

    printf("Original: %s\n", *cp);
    
    vc_strdel(cp);

    printf("After: %s", *cp);   

    return 0;
}