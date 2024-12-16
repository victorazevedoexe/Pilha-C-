# Stack Machine Interpreter

Este projeto implementa um interpretador baseado em pilha. Os comandos suportados incluem:

- `push <valor>`: Empilha um valor na pilha.
- `add`: Soma os dois últimos valores na pilha.
- `sub`: Subtrai os dois últimos valores na pilha.
- `mul`: Multiplica os dois últimos valores na pilha.
- `div`: Divide os dois últimos valores na pilha.
- `print`: Imprime o conteúdo da pilha.
- `exit`: Sai do programa.

## Estrutura do Projeto

- `include/`: Contém os arquivos de cabeçalho.
- `src/`: Contém a implementação em C.

## Compilação

Use o comando abaixo para compilar:

```bash
gcc src/*.c -Iinclude -o stack_machine
