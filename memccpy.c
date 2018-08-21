 #include<stdio.h>
 
 typedef unsigned int size_t;
 void *memccpy (void *dest, const void *src, int c, size_t n)
 {
     char *c1 = (char *)src;
     char *c2 = (char *)dest;

     for (int i = 0; i < n; i++)
     {
         if(c1[i] == c)
         {
            c2[i] = c1[i]; 
            c2[i + 1] = '\0';
            break;
         }
         else
         {
         c2[i] = c1[i];
         }
     }
 }

 int main()
 {
    char string1[60] = "Programming is sooo much FUN! specially under pressure";
    char buffer[61];
    char *pdest;
   
    printf( "Source: %s\n", string1 );
    pdest = memccpy( buffer, string1, '!', 42);
    printf( "Result: %s\n", buffer );
   
    return 0;
 }