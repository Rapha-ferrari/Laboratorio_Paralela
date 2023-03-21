#include  <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>


int main(){

    pid_t childpid;
    int shm_id; 

    shm_id = shmget(IPC_PRIVATE, 1024, IPC_CREAT |  0660);
         if (shm_id < 0) {
             printf("shmget error\n");
        }
    int *shrd = (int*)shmat(shm_id, NULL, 0);


    *shrd = 1;

  
    printf("O valor inicial da variavel compartilhada é %i\n",*shrd);
    childpid = fork();
    printf("o childpid é %i\n",childpid);
    if (childpid == 0){     
        *shrd+= 2;  

        printf("O valor da variavel compartilhada ao somar 2 é %i\n",*shrd);    
    }
    else{ 
        wait(NULL);     
        *shrd *= 4 ;

        printf("O valor da variavel compartilhada ao multiplicar por 4 é %i\n",*shrd);    

    }


    return 0;
}
