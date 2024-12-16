#include <stdio.h>
#include "interpret.h"

static void repl() {
    char line[1024];
    for (;;) {
        printf("> ");
        if (!fgets(line, sizeof(line), stdin)) {
            printf("\n");
            break;
        }
        interpret(line);
    }
}

int main() {
    printf("Bem-vindo ao interpretador de máquina baseada em pilha.\n");
    printf("Comandos disponíveis: push <valor>, add, sub, mul, div, print, exit\n");
    repl();
    return 0;
}

