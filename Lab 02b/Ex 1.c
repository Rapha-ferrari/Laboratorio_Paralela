#include<stdio.h>
#include<stdlib.h>

int main () {
    int k, i, j;

    printf("Digite a dimensao da matriz quadrada\n");
    scanf("%d", &k);

    int a[k][k];

    printf("Digite os valores da matriz\n");
    for (i=0; i<k; i++){
        printf("Digite os valores para a %d linha\n", i+1);
        for (j=0; j<k; j++)
            scanf("%d", &a[i][j]);
            for (i=0; i<k; i++){
                for (j=0; j<k; j++){
                    if (a[i][j] < result) {
                    result = a[i][j];
                    linha = i+1;
    }
  }
}

}
    printf("A matriz digitada é\n");
    for (i=0; i<k; i++){
        for (j=0; j<k; j++){
            printf("%d ", a[i][j]);
            }
            printf("\n");
        }

system("pause");
}
