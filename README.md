# Push Swap
*Este projeto foi criado como parte do currículo da 42 por Nathan Fontenele - agomes-f*

## Descrição
Este projeto consiste em implementar um programa que ordena uma pilha de números inteiros utilizando um conjunto limitado de operações. O objetivo é realizar a ordenação com o menor número possível de movimentos.

## Estrutura de Dados: Lista Encadeada Simples
Neste projeto, as pilhas são representadas por listas encadeadas simples. Cada elemento da pilha é um nó que contém um valor inteiro e um ponteiro para o próximo nó. Essa abordagem permite manipular facilmente os elementos, realizar operações como inserção, remoção e movimentação, além de facilitar a implementação das operações exigidas pelo projeto.

### Vantagens da Lista Encadeada Simples
- Permite inserção e remoção eficiente de elementos.
- Não há necessidade de definir um tamanho fixo para a pilha.
- Facilita a implementação das operações de push, swap, rotate e reverse rotate.

### Estrutura Básica de um Nó
```c
typedef struct s_node {
    int value;
    struct s_node *next;
} t_node;
```

Cada pilha é composta por uma sequência de nós, onde o primeiro nó representa o topo da pilha.

## Algoritmo de Ordenação
O projeto utiliza diferentes abordagens para ordenar a pilha, dependendo do número de elementos:

- Para pilhas pequenas (até 5 elementos), são aplicados algoritmos específicos e otimizados, garantindo a menor quantidade de operações.
- Para pilhas maiores, é utilizado um algoritmo baseado na estratégia "Turk" (ou similar), que calcula o custo de cada movimento e seleciona a operação mais eficiente para aproximar os elementos da posição correta. O algoritmo faz uso de cálculos de custo, rotação e movimentação entre as pilhas para otimizar a ordenação.

Essa abordagem permite que o programa seja eficiente tanto para casos simples quanto para listas maiores, sempre buscando minimizar o número de operações.

## Recursos
- Algoritmo de ordenação para pilhas
- Operações básicas: swap, push, rotate, reverse rotate
- Implementação modular em C
- Utilização da biblioteca libft

## Instruções

1. Clone o repositório:
   ```zsh
   git clone <url-do-repositorio>
   ```

2. Compile o projeto:
   ```zsh
   make
   ```

3. Execute o programa:
   ```zsh
   ./push_swap <números>
   ```
   Exemplo:
   ```zsh
   ./push_swap 3 2 1
   ```

4. Para limpar arquivos compilados:
   ```zsh
   make clean
   ```

5. Para limpar tudo (incluindo arquivos de biblioteca):
   ```zsh
   make fclean
   ```

6. Para recompilar do zero:
   ```zsh
   make re
   ```

## Observações
- O programa aceita apenas números inteiros e não duplicados

## Organização dos Arquivos

- **src/main.c**: Ponto de entrada do programa. Faz o controle do fluxo principal, inicializa as pilhas, chama funções de parsing e ordenação.
- **src/parse.c / src/parse_utils.c**: Responsáveis por validar e processar os argumentos recebidos, convertendo-os em valores inteiros e inicializando a pilha.
- **src/error.c**: Gerencia mensagens de erro e finalização do programa em caso de entrada inválida.
- **src/free_utils.c**: Funções para liberar memória das pilhas e estruturas auxiliares.
- **src/stack_init.c**: Inicializa as pilhas com os valores fornecidos.
- **src/stack_utils.c / src/stack_utils2.c**: Funções auxiliares para manipulação das pilhas, como busca, contagem, verificação de ordenação, etc.
- **src/operations_push.c**: Implementa as operações de push entre as pilhas.
- **src/operations_swap.c**: Implementa as operações de swap (troca de elementos no topo).
- **src/operations_rotate.c**: Implementa as operações de rotação (move o topo para o final da pilha).
- **src/operations_reverse_rotate.c**: Implementa as operações de rotação reversa (move o último elemento para o topo).
- **src/move_utils.c**: Funções auxiliares para calcular e executar movimentos entre as pilhas.
- **src/sort_small.c**: Algoritmo específico para ordenar pilhas pequenas (até 5 elementos).
- **src/sort_turk.c**: Algoritmo principal para ordenar pilhas grandes, baseado em cálculo de custo.
- **src/target_cost.c**: Funções para calcular o custo de cada movimento e determinar o alvo ideal para cada elemento.
- **includes/push_swap.h**: Header principal do projeto, contém definições de estruturas, protótipos de funções e macros.

### Uso de IA

O uso de Inteligência Artificial (AI) neste projeto foi limitado às seguintes tarefas:

* **Formatação de Documentação:** Auxílio na estruturação e formatação deste arquivo `README.md` em Markdown.
