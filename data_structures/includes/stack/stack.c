#include <stdio.h>
#include <stdlib.h>
#include "./stack.h"


// create stack
stack_t* create_stack(){
    stack_t* stack = (stack_t*) calloc(1, sizeof(stack_t));
    stack->top = -1;
    return stack;
}

// push
void push( stack_t *stack, int element){
    stack->top++;
    stack->elements = (int*) realloc(stack->elements, stack->top * sizeof(int));
    stack->elements[stack->top] = element;
}

// pop
int pop(stack_t *stack){
    if( stack->top < 0){
        printf("Underflow!\n");
        return STACK_OPERATION_UNSUCCESSFUL;
    }
    int element = stack->elements[stack->top];
    stack->top--;
    if(stack->top <= 0){
        stack->elements = (int*) realloc(stack->elements, sizeof(int));
    }else{
        stack->elements = (int*) realloc(stack->elements, stack->top * sizeof(int));
    }
    return element;
}

// print stack
void print_stack(stack_t *stack){
    printf("[");
    for(int i = 0; i < stack->top + 1; i++){
        printf(" %d ", stack->elements[i]);
    }
    printf("]\n");
}