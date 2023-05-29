Esse arquivo contém a explicação de como é feito o controle de acesso à região crítica para a variável global compartilhada no código.

OpenMP é utilizado com o intuito de programar com memória compartilhada, isto é, quando diferentes threads possuem acesso a uma mesma área de memória. Em outras palavras, todas as threads conseguem acessar a memória principal e, por exemplo, uma variável nela alocada, pois ela é compartilhada e global entre as threads.

Sendo assim, nessa API, todos os núcleos possuem acesso à memória RAM. Para permitir esse compartilhamento de memória, existem alguns passos a se seguir. A primeira coisa é incluir a biblioteca:

#include <omp.h>

Também colocamos #ifdef e #endif para situações em que o compilador não reconheça o OpenMP.

Mais à frente, foi feito:

#pragma omp parallel num_threads(thread_count) SerieTaylor(ln, &soma);

Essa diretiva aplica paralelismo na linha seguinte, fazendo com que sejam utilizadas tantas threads para esse bloco. No nosso caso, especifiquei 4 threads para serem aplicadas na função SerieTaylor, que por sua vez recebeu os parâmetros 'ln' e 'soma'.

Esses parâmetros podem ser acessados por qualquer thread, seja o valor de 'ln' ou a variável global de fato alterada 'soma', devido ao operador &, fazendo referência ao endereço de memória original da variável.

Além disso, também fiz o uso de #ifdef, #else e #endif mais uma vez, para garantir que a função SerieTaylor funcione, mesmo sem o reconhecimento da biblioteca por parte do compilador.

Por fim:

#pragma omp critical *soma += soma_parcial;

A diretiva utilizada impede que duas threads acessem o mesmo local de memória ao mesmo tempo, garantindo o princípio de exclusão mútua. Sendo assim, apenas uma thread por vez pode executar o bloco em seguida da diretiva.

É por meio desta diretiva que o controle de acesso à região crítica é garantido, ou seja, a variável global 'soma', essencial para o código, tem sua manipulação simultânea travada. A primeira thread a chegar nessa instrução pode entrar, enquanto as outras precisam aguardar o espaço ficar livre.

Isso pode tornar o processo um pouco mais lento, visto que as threads ficam esperando em determinado momento. No entanto, essa diretiva garante que a região crítica tenha seu valor correto ao final da execução.

Sem o uso do "critical", principalmente para valores menores de ln(), é comum esse valor variar bastante, pois muitas threads estão atualizando o conteúdo da variável ao mesmo tempo, sendo algo inconsistente.
