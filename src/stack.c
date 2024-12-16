#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack {
    int *data;
    int top;
    int size;
};

Stack* new_stack(int size) {
    Stack* s = malloc(sizeof(Stack));
    s->data = malloc(size * sizeof(int));
    s->top = 0;
    s->size = size;
    return s;
}

void stack_push(Stack* s, int value) {
    if (s->top < s->size) {
        s->data[s->top++] = value;
    } else {
        printf("Pilha cheia!\n");
    }
}

int stack_pop(Stack* s) {
    if (s->top > 0) {
        return s->data[--s->top];
    } else {
        printf("Pilha vazia!\n");
        return -1;
    }
}

void stack_print(Stack* s) {
    printf("Pilha: ");
    for (int i = 0; i < s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

