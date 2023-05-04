#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

double ln = 1000, soma = 0;
int thread_count;

void *SerieTaylor(void* rank);

int main(int argc, char* argv[]) 
{
  long thread = 0;
  pthread_t* thread_handles;

  // caso queira ter a quantidade em tempo de execução:
  // int thread_count = strtol(argv[1], NULL, 10); (mudanças serão necessárias)
  thread_count = 2;
  
  thread_handles = malloc (thread_count*sizeof(pthread_t));

  for (thread = 0; thread < thread_count; thread++)
    {
      pthread_create(&thread_handles[thread], NULL, SerieTaylor, (void*) thread);
    }

  for (thread = 0; thread < thread_count; thread++)
    {
      pthread_join(thread_handles[thread], NULL);
    }

  free(thread_handles);
  printf("ln(%d) = %f\n", (int) ln, soma);
  //free(list);
  return 0;
}

// Função passada para pthread_create, que calcula a soma de 
// 1/1..1/500 em uma thread e de 1/501..1/1000 na outra.
// A função foi escrita de modo a utilizar apenas 2 threads

void *SerieTaylor(void* rank)
{
  long my_rank = (long) rank;
  
  double inicio = my_rank*(ln/2) + 1;
  double fim = inicio + (ln/2);
  
  //printf("Thread = %ld\nInício e Fim: %f, %f\n", lista->thread, lista->inicio, lista->fim);
  
  double d;
  for (d = inicio; d < fim; d++)
  {
    soma += 1/d;
  }
  
  return NULL;
}
