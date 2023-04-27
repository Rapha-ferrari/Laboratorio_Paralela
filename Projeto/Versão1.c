#include <stdio.h>

// Cálculo da série de Taylor iterativamente.
// A função incrementa o valor de i de 1..t
// para calcular a soma de 1/1 até 1/t

double iSerieTaylor(int t)
{
  double soma = 0;
  for (double i = 1; i <= t; i++)
    {
      soma += 1/i;
    }
  return soma;
}

int main() 
{
  double soma = iSerieTaylor(10);
  printf("-> ln(10)\nSoma = %f\n", soma);
  return 0;
}
