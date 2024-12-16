#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "interpret.h"

void interpret(const char *source) {
    char op[10];
    char arg[10];
    sscanf(source, "%s%s", op, arg);
    printf("Operação: %s\n", op);
    printf("Argumento: %s\n", arg);
}
