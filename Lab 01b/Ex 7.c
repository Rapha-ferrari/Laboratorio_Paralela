#include <stdio.h>
#include <stdlib.h>

int main() {

     struct pessoas {

        char nome[20];
        int idade;
        float peso;
        float altura;

    };

    struct pessoas usuario[3];

    int i;

    for (i=0; i<=2; i++)
    {

        printf("\n");
        printf("\nDigite seu nome: ");
        fgets(usuario[i].nome, sizeof(usuario[i].nome), stdin);

        printf("\nDigite sua idade: ");
        scanf("%i", &usuario[i].idade);
        fflush(stdin);

        printf("\nDigite seu peso: ");
        scanf("%f", &usuario[i].peso);
        fflush(stdin);

        printf("\nDigite sua altura: ");
        scanf("%f", &usuario[i].altura);
        fflush(stdin);
    }

    for (i=0; i<=2; i++)
    {
      printf("\n%s, com %i anos voce pesa %.2f e tem %.2f de altura!",usuario[i].nome, usuario[i].idade, usuario[i].peso, usuario[i].altura);

    }
    printf("\n\n");
    return(0);
}
