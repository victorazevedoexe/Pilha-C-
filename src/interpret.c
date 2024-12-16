#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "interpret.h"

void interpret(const char *source) {
    char op[10];
    char arg[10];
    sscanf(source, "%s%s", op, arg);

    if (strcmp(op, "exit") == 0) {
        printf("Saindo do programa.\n");
        exit(0);
    } else {
        printf("operação: %s\n", op);
        printf("argumento: %s\n", arg);
    }
}
