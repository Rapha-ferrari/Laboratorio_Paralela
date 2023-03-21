 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 main (){
    char nome1[100], nome2[100];
    printf("Informe o primeiro nome: ");
    gets(nome1);
    printf("Informe o segundo nome: ");
    gets(nome2);
    char ordem();
    ordem(nome1, nome2);

 }
char ordem(char a[100], char b[100]){
    int tam=0,i=0,j=0, cont1=0, cont2=0, z=0;
    tam=strlen(a);
    for(i=0;i<tam;i++){
        if(strncmp(a, b, tam)<0){
            printf("A ordem e:\n %s.\n %s.\n", a,b);
            break;
        }
        if(strncmp(a, b, tam)>0){
            printf("A ordem e:\n %s.\n %s.\n", b,a);
            break;
        }
    }
  }
