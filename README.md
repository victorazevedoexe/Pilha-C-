# Stack Machine Interpreter

Este projeto implementa um interpretador baseado em pilha, que suporta diversos comandos para manipular uma pilha.

## Comandos Suportados
- `push <valor>`: Adiciona um valor à pilha.
- `add`: Soma os dois últimos valores na pilha.
- `sub`: Subtrai os dois últimos valores na pilha.
- `mul`: Multiplica os dois últimos valores na pilha.
- `div`: Divide os dois últimos valores na pilha.
- `print`: Imprime o conteúdo da pilha.
- `exit`: Sai do programa.

## Estrutura do Projeto
- `include/`: Contém os arquivos de cabeçalho (`interpret.h`, `stack.h`).
- `src/`: Contém as implementações em C (`interpret.c`, `stack.c`, `main.c`).

## Como Compilar
Para compilar o programa, use o seguinte comando no terminal:

```bash
gcc src/*.c -I include -o stack_machine
