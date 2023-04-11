#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/shm.h>

int main(){

  pid_t childpid; //criação do childpid com pid_t para representar o id do processo
  int segMemoriaComp; //variável que representa o segmento de memória compartilhada criado

  segMemoriaComp = shmget(IPC_PRIVATE, 1024, IPC_CREAT |  0600); 
  if (segMemoriaComp < 0) { 
    printf("Erro na execucao!\n");
  }
   
  int *variavel = (int*)shmat(segMemoriaComp, NULL, 0);
  *variavel = 1;
  
  printf("Variavel compartilhada: %i\n",*variavel);
  childpid = fork();
  printf("Childpid: %i\n",childpid);

  if (childpid == 0) { // O valor 0 indica que o processo é o filho   
    *variavel += 2;  
    printf("variavel compartilhada + 2: %i\n",*variavel);    
  } else { // caso não seja o filho (ou seja, o processo pai)
    wait(NULL);     
    *variavel *= 4;
    printf("variavel compartilhada x 4: %i\n",*variavel);    
  }
  return 0;
}
