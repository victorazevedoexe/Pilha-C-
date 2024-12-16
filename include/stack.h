#ifndef STACK_H
#define STACK_H

typedef struct stack Stack;

Stack* new_stack(int size);
void stack_push(Stack* s, int value);
int stack_pop(Stack* s);
void stack_print(Stack* s);

#endif
