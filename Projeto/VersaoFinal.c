#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _OPENMP
#include <omp.h>
#endif // _OPENMP

void SerieTaylor(double ln, double* soma);

int main(int argc, char* argv[]) 
{
  double soma = 0; // variável que vai ser atualizada com a soma final
  double ln = 100000;
  
  // caso queira ter a quantidade em tempo de execução:
  // int thread_count = strtol(argv[1], NULL, 10);
  int thread_count = 4;

  // Variáveis para medir o tempo de execução
  clock_t start, end;
  double cpu_time_used;

  // Marca o início da medição do tempo
  start = clock();

  // paraleliza a linha seguinte com OpenMP com 4 threads
  #pragma omp parallel num_threads(thread_count)
  SerieTaylor(ln, &soma);

  // Marca o fim da medição do tempo
  end = clock();

  // Calcula o tempo de execução em segundos
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

  printf("ln(%d) = %f\n", (int) ln, soma);
  printf("Tempo de execução: %f segundos\n", cpu_time_used);

  return 0;
}

// Função que utiliza OpenMP para calcular a soma da
// série de Taylor. O cálculo de início e fim pode ser
// utilizado com sucesso para qualquer divisor 
// do valor de x em ln(x). Exemplo:
// ln(1000) -> pode usar thread_count = 2, 4, 5, ...

void SerieTaylor(double ln, double* soma)
{
  #ifdef _OPENMP
  int my_rank = omp_get_thread_num(); // número da thread
  int thread_count = omp_get_num_threads(); // quantidade de threads
  #else // -> caso o compilador não o reconheça
  int my_rank = 0;
  int thread_count = 1; // função executa como se fosse serial
  #endif // _OPENMP 

  // cálculos baseados no valor de T em ln(T), número da thread e qtd de threads
  double inicio = (ln/thread_count)*my_rank + 1;
  double fim = inicio + (ln/thread_count) - 1;
  double soma_parcial, d;

  for (d = inicio; d <= fim; d++)
  {
    soma_parcial += 1/d; // soma interna para cada thread
  }
  
  // cria seção crítica para permitir a entrada de apenas uma thread por vez
  #pragma omp critical
  *soma += soma_parcial;
}
