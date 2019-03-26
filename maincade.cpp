#include <stdio.h>
#include <stdlib.h>


char *invertir(char *p);

int main(void)
{
   char cadena[] = "holi yesy";
   
   printf("Invertida: \"%s\"\n", invertir(cadena));

   return EXIT_SUCCESS;
}

char *invertir(char *p)
{
   char *rv;
   char *q;
   char temp;
   
   rv = p;
   for (q = p; *q != '\0'; q++)
      ;
   
   if (q - p > 1)
      for (q--; p < q; p++, q--){
         temp = *p;
         *p = *q;
         *q = temp;
      }
   
   return rv;
}
