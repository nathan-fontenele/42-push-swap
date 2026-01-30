*Este projeto foi criado como parte do currículo da 42 por Rafaela Oliveira / rafasilv*

# 📚 ft_printf

## ✨ Descrição

O `ft_printf` é uma implementação simplificada e própria da função padrão `printf` da biblioteca C.

O **objetivo** é recriar as funcionalidades essenciais da `printf`, focando na manipulação de argumentos variáveis (variadic functions) e na formatação de saída para o terminal.

### Funcionalidades Suportadas

O projeto lida com os seguintes especificadores de conversão:
* `%c`: Caractere único.
* `%s`: String de caracteres. Lida com strings `NULL` imprimindo `(null)`.
* `%p`: Endereço de ponteiro, prefixado com `0x` e em hexadecimal minúsculo. Imprime `(nil)` se o ponteiro for nulo.
* `%d` ou `%i`: Inteiro decimal assinado.
* `%u`: Inteiro decimal sem sinal.
* `%x` e `%X`: Inteiro em notação hexadecimal (minúscula e maiúscula, respectivamente).
* `%%`: O caractere de porcentagem literal.

## 🛠️ Instruções

### Compilação

O projeto é compilado em uma biblioteca estática chamada `libftprintf.a`.

1.  **Clone o repositório:**
    ```bash
    git clone https://github.com/rafaelasoperes/ft_printf.git
    cd ft_printf
    ```
2.  **Compile a biblioteca:**
    ```bash
    make
    ```
    Este comando compila os arquivos (`ft_printf.c`, `srcs/ft_putchar.c`, etc.) e cria a biblioteca `libftprintf.a`.

### Comandos do Makefile

* **`make` / `make all`**: Compila a biblioteca `libftprintf.a`.
* **`make clean`**: Remove os arquivos objeto (`.o`).
* **`make fclean`**: Remove os arquivos objeto e a biblioteca `libftprintf.a`.
* **`make re`**: Executa `fclean` seguido por `all` (recompilação completa).

### Uso

Para usar `ft_printf` em seu projeto:

1.  Inclua o cabeçalho: `#include "ft_printf.h"`.
2.  Compile seu código lincando a biblioteca:
    ```bash
    cc main.c libftprintf.a -o meu_programa
    ```

## 🧠 Algoritmo e Estrutura de Dados

### ⚙️ Algoritmo Principal (`ft_printf`)

O algoritmo principal itera sobre a string de formato (`str`).

* **Processamento:**
    * Se o caractere não for `%`, ele é impresso diretamente usando `ft_putchar`.
    * Se for `%`, o índice é avançado, e a função auxiliar `check_comp` é chamada para manipular o argumento variável.
* **`check_comp`:** Esta função utiliza uma série de condicionais (`if/else if`) para identificar o especificador de conversão (`c, s, d, i, u, x, X, p, %`) e chama a função de impressão específica (`ft_putstr`, `ft_putnbr`, `ft_putnbr_hexa`, etc.) para o tipo de dado obtido via `va_arg`.
* **Contagem:** O valor de retorno de todas as funções de impressão (o número de caracteres impressos) é somado à variável `count`.

### 🛠️ Detalhe da Implementação

* **Impressão de Números:** Funções como `ft_putnbr` (decimais) e `ft_putnbr_hexa` (hexadecimais/ponteiros/unsigned) utilizam recursão para imprimir os dígitos na ordem correta, da esquerda para a direita. A função `ft_putnbr` lida especificamente com o caso do `INT_MIN`.

### 🧱 Estrutura de Dados

A principal estrutura de dados utilizada é a **lista de argumentos variáveis** (definida em `<stdarg.h>`: `va_list`, `va_start`, `va_arg`, `va_end`).

* **Justificativa:** Esta estrutura é fundamental para o projeto, pois permite que `ft_printf` aceite um número e tipos variáveis de argumentos após a string de formato, replicando a flexibilidade da função padrão.

## 🔗 Recursos

* **Documentação Oficial da `printf`:** Consulte as páginas do manual (`man 3 printf`).
* **Argumentos Variáveis:** Documentação sobre `<stdarg.h>` (`man 3 stdarg`).

### Uso de IA

O uso de Inteligência Artificial (AI) neste projeto foi limitado às seguintes tarefas:

* **Formatação de Documentação:** Auxílio na estruturação e formatação deste arquivo `README.md` em Markdown.

---
