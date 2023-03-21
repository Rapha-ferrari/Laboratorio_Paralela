#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int main()

{

   setlocale(LC_ALL, "portugues");//usa utf-8 para acentos

   float n1, n2, n3, me, ma;

   printf("Digite a primeira nota: ");

   scanf("%f", &n1);

   printf("Digite a segunda nota: ");

   scanf("%f", &n2);

   printf("Digite a terceira nota: ");

   scanf("%f", &n3);

   printf("Digite a média dos exercícios: ");

   scanf("%f", &me);

   ma = (n1 + n2*2 + n3*3 + me)/7.0;

   if(ma>=9)

   {

       printf("A");

   }

   else if(ma>=7.5)

   {

       printf("B");

   }

   else if(ma>=6)

   {

       printf("C");

   }

   else if(ma>=4)

   {

       printf("D");

   }

   else

   {

       printf("E");

   }

   printf("\n");

   return 0;

}
