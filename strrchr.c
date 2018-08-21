#include <stdio.h>

char *strrchr(char *str, int c)
{
   while(*str) 
   {
       if( *str == c)
       {
           return (char *) str;
       }
       str++;
   }
   return (char *)0;
}

int main()
{
    char *str = "Programming is sooo much FUN!. specially under. pressure";
    char c = '.';
    
    printf("%s",strrchr(str, c));

    return 0;
}