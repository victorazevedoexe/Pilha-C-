#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct stack {
    int* data;
    int size;
    int top;
} Stack;

Stack* new_stack(int size) {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->data = (int*)malloc(size * sizeof(int));
    s->size = size;
    s->top = 0;
    return s;
}

void stack_push(Stack* s, int value) {
    if (s->top >= s->size) {
        printf("Erro: Pilha cheia!\n");
        return;
    }
    s->data[s->top++] = value;
}

int stack_pop(Stack* s) {
    if (s->top == 0) {
        printf("Erro: Pilha vazia!\n");
        exit(EXIT_FAILURE);
    }
    return s->data[--s->top];
}

void stack_print(Stack* s) {
    printf("Pilha: ");
    for (int i = 0; i < s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}
