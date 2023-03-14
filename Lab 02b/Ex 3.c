#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

int main ()

{

int n, i, j, l, k;

printf ("Digite um número ímpar que será o número máximo do triângulo:\n");

do

{

scanf ("%d", &n);

printf ("Número inválido.\n");

}

while (n%2 == 0);

 

   l = 0;

   

   printf ("\n\n\n");

   

for (i = 1; i <= n; i++)

{

       for (k = 0; k < l; k++)

       {

           printf(" ");

       }

 printf ("%d ", i);

 for (j = i+1; j <= n; j++)

  printf ("%d ", j);

  n -= 1;

  printf ("\n");

           l += 2;

   }

   printf ("\n\n\n        Tecle");

   getch();

   return 0;

}
