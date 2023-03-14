#include<stdio.h>
#include<stdlib.h>

void trans(int);

int main () {

    int k, m, i, j;

    printf("Digite a dimensao da matriz\n");
    printf("Digite o numero de linhas\n");
    scanf("%d", &k);
    printf("Digite o numero de colunas\n");
    scanf("%d", &m);

    int a[k][m];

    printf("Digite as entradas da matriz\n");
    for (i=0; i<k; i++){
        printf("Digite as entradas para a %d linha\n", i+1);
        for (j=0; j<m; j++)
            scanf("%d", &a[i][j]);
            }   

    printf("A matriz é\n");
    for (i=0; i<k; i++){
        for (j=0; j<m; j++){
            printf("%d ", a[i][j]);
            }
            printf("\n");
        }

    trans(m,k);

    system("pause");

} 

void transposta(int m, int k) {   

     int a[i][j]
     printf("A matriz transposta é\n");
     for (i=0; i<m; i++){
         for (j=0; j<k; j++){
             printf("%d ", a[j][i]);
             }
            printf("\n");
        }
}
