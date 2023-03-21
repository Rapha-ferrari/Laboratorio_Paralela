#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int vet[5], fat[5], i;
    for (i = 0; i < 5; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 5; i++) {
        for (fat[i] = 1; vet[i] > 1; vet[i]--) {
            fat[i] *= vet[i];
        }
        printf("%d\n", fat[i]);
    }
    return 0;
}

//A versão serial demorou 0,42 segundos, essa versão multiprocessada demorou 0,38 segundos.
