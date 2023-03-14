#include <stdio.h>
 int main ()
 {
   char string[100];
   int i;
   printf ("Digite uma string: ");
   gets (string); 
   for (i=0; string[i] != '\0'; i++)
     printf ("Caractere %d: %c\n", i, string[i]);
   return (0); 
 }
