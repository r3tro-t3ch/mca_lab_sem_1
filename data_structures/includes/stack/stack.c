/**
 * @file stack.c
 * @author Vishnu Joshi (joshi.vishnu1994@gmail.com)
 * @brief Stack implementation using linked lists
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include "../node/node.h"
#include "./stack.h"

// create stack
stack_t* new_stack(){
    stack_t* stack = (stack_t*) calloc(1,sizeof(stack_t));
    stack->header = stack->top = NULL;
    stack->size = 0;
    return stack;
}

// push
void push(int element, stack_t* stack){
    node_t* node = new_node(element);
    if(stack->size == 0){
        stack->header = stack->top = node;
    }else{
        stack->top->next = node;
        stack->top = node;
    }
    stack->size++;
}

// pop
node_t* pop( stack_t* stack){

    if( stack->size == 0){
        return NULL;
    }

    node_t* element = stack->top;

    if( stack->size == 1){
        stack->header = stack->top = NULL;
    }else{
        node_t* previous_element = stack->header;

        for(int i = 0; i < (stack->size) - 2; i++){
            previous_element = previous_element->next;
        }

        previous_element->next = NULL;
        stack->top = previous_element;
    }

    stack->size--;

    return element;
}

// print stack
void print_stack(stack_t* stack){
    printf("[");
    for(node_t* node = stack->header; node != NULL; node = node->next){
        printf(" %d ", node->data);
    }
    printf("]\n");
}