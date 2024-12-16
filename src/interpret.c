#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "interpret.h"
#include "stack.h"

static Stack* stack = NULL;

void interpret(const char* source) {
    if (!stack) {
        stack = new_stack(100);  // Tamanho máximo da pilha
    }

    char op[10];
    int arg;

    if (sscanf(source, "%s %d", op, &arg) == 2) {
        if (strcmp(op, "push") == 0) {
            stack_push(stack, arg);
        } else {
            printf("Comando desconhecido: %s\n", op);
        }
    } else if (sscanf(source, "%s", op) == 1) {
        if (strcmp(op, "add") == 0) {
            int b = stack_pop(stack);
            int a = stack_pop(stack);
            stack_push(stack, a + b);
        } else if (strcmp(op, "sub") == 0) {
            int b = stack_pop(stack);
            int a = stack_pop(stack);
            stack_push(stack, a - b);
        } else if (strcmp(op, "mul") == 0) {
            int b = stack_pop(stack);
            int a = stack_pop(stack);
            stack_push(stack, a * b);
        } else if (strcmp(op, "div") == 0) {
            int b = stack_pop(stack);
            if (b == 0) {
                printf("Erro: Divisão por zero!\n");
                stack_push(stack, b); // Retorna b para a pilha
                return;
            }
            int a = stack_pop(stack);
            stack_push(stack, a / b);
        } else if (strcmp(op, "print") == 0) {
            stack_print(stack);
        } else {
            printf("Comando desconhecido: %s\n", op);
        }
    } else {
        printf("Erro: Comando inválido!\n");
    }
}
