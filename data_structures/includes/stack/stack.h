#ifndef INT_STACK_H
#define INT_STACK_H

#define STACK_OPERATION_UNSUCCESSFUL -1

typedef struct STACK_T{
    int *elements;
    int top;
} stack_t;


// create stack
stack_t* create_stack();

// push
void push( stack_t *stack, int element);

// pop
int pop(stack_t *stack);

// print stack
void print_stack(stack_t *stack);

#endif