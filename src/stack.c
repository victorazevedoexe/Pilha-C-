#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct stack {
    int *data;
    int top;
    int size;
} Stack;

Stack* new_stack(int size) {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->data = (int*)malloc(size * sizeof(int));
    s->top = 0;
    s->size = size;
    return s;
}

void stack_push(Stack* s, int value) {
    if (s->top < s->size) {
        s->data[s->top++] = value;
        printf("Valor %d adicionado à pilha.\n", value);
    } else {
        printf("Erro: pilha cheia.\n");
        exit(EXIT_FAILURE);
    }
}

int stack_pop(Stack* s) {
    if (s->top > 0) {
        return s->data[--s->top];
    } else {
        printf("Erro: pilha vazia.\n");
        exit(EXIT_FAILURE);
    }
}

void stack_print(Stack* s) {
    printf("Pilha: ");
    for (int i = 0; i < s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}
