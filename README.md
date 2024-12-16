# Interpretador de Pilha

## Descrição
Este é um projeto modular de um interpretador baseado em pilha, escrito em C. Ele inclui um interpretador REPL (Read-Eval-Print Loop) e manipulação de pilhas.

## Estrutura do Projeto
- **include/**: Contém os arquivos de cabeçalho (`interpret.h`, `stack.h`).
- **src/**: Contém os arquivos de implementação (`interpret.c`, `stack.c`, `main.c`).

## Funcionalidades
- Interpretar comandos para manipular pilhas.
- Comandos suportados:
  - `empilha <valor>`: Empilha um valor inteiro.
  - `desempilha`: Remove o topo da pilha.
  - `exibe`: Exibe o conteúdo da pilha.
  - `exit`: Sai do REPL.

## Como Compilar e Executar
1. Organize o projeto nas seguintes pastas:
project/ ├── include/ │ ├── interpret.h │ └── stack.h ├── src/ │ ├── interpret.c │ ├── stack.c │ └── main.c └── README.md
