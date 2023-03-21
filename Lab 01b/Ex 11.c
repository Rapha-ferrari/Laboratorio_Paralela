#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int j,i,f;
    int matriz[2][5];

    for(i=0; i<2; i++ ){
        for(j=0; j<5; j++){
            matriz[i][j]=rand()%100;
        }
    }
    printf("\n\t\t<<<<<MATRIZ>>>>>\n\n");
    for(i=0; i<2; i++ ){
        printf("\t\t");
        for(j=0; j<5; j++){
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<5; i++)
        matriz[1][i] = matriz[0][i] + matriz[1][i];
        printf("\n\n\t\t");
        for(j=0; j<5; j++){
            printf("%3d ",matriz[1][j]);
    }
    printf("<<=== RESULTADO <<===\n\n");   
    printf("\t\t Tecle Para Sair --> ");
    j=100;
    while( ! kbhit()){
        printf("( %3d  )\b\b\b\b\b\b\b\b",j);     
        j--;
        if( ! j ) break;
    }
    printf("( %3d  )",j);
    return 0;
}
