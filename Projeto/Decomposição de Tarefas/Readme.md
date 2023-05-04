# Dag Main
![Dag Programacao Paralela](https://user-images.githubusercontent.com/74374381/19434474-9a6a86bb-4104-4fde-9a94-1f8ccd20726e.png)

# Dag Fatorial
![Dag Fatorial](https://user-images.githubusercontent.com/743781/197434719-3f6be466-d3ad-42a0-a32f-a7c78ae9ec84.png)

# Qual é o limite inferior do tempo de execução paralela para cada decomposição?
Considerando que o Número da iteração seja n, o limite inferior será n + 3 unidades de tempo.   

# Quantos processadores são necessários para se conseguir o tempo mínimo de execução?

Caso tivéssemos infinitos processadores ao nosso dispor, poderíamos calcular o fatorial de todos os números de uma vez só, com isso o processador que levaria mais tempo seria o que estivesse calculando o maior número, portanto o tempo de execução seria O(n). 

# Qual é o grau máximo de concorrência?
Considerando que o Número de iterações seja n, podemos paralelizar as n tarefas.  

# Qual é o paralelismo médio?
12 / 8 = 1.5 Unidades de tempo
