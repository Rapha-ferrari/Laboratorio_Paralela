# Raphael Ferrari - 32008422

# Projeto - Computação Paralela 

Para executar e compilar os arquivos .c existentes nesse diretório, temos diversos processos possíveis.
Porém, no curso, a ideia é compilar os arquivos por meio do GCC e em um sistema Linux.

### - Compilando no terminal - Linux

- Para esse método, é preciso ter instalado o Git e o GCC no seu computador (comando -> sudo apt install ..., sendo ... git ou gcc).
- Caso queira, clonar o repositório atual do github em um certo diretório de sua máquina.
- De qualquer modo, após ter o arquivo baixado (seja pela sincronização ou por outra maneira), abrir o terminal na pasta em que este se encontra.
- Em seguida, no geral, utilizar os comandos:

-> gcc nomedoarquivo.c -o nomequalquer

-> ./nomequalquer

- Mais especificamente:

### V1
- Para a v1, o primeiro comando é igual ao que está dito acima.
- Não é preciso digitar qualquer valor de entrada após ./nomequalquer 

### V2
- Para a v2, o primeiro comando é gcc nomedoarquivo.c -o nomequalquer -lpthread
- Não é preciso digitar qualquer valor de entrada após ./nomequalquer.

### - Considerações sobre o projeto

- Linguagem escolhida: C (vide orientações para o compilador GCC).
- Ambiente de execução: máquina do Raphael.
- Neste diretório 'projeto', teremos uma parte reservada para armazenar printscreens de execução.
- Este arquivo foi feito baseado na utilização da biblioteca time.h no código para cada versão e estará disponível no repositório.
- Além disso, coloquei as versões atualizadas do código-fonte conforme as semanas forem passando.
