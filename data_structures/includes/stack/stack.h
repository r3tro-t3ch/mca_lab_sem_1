/**
 * @file stack.h
 * @author Vishnu Joshi (joshi.vishnu1994@gmail.com)
 * @brief stack definiton using linked list
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../node/node.h"

typedef struct STACK_T{
    node_t *header,*top;
    int size;
} stack_t;

// create stack
stack_t* new_stack();

// push
void push(int element, stack_t* stack);

// pop
node_t* pop( stack_t* stack);

// print stack
void print_stack(stack_t* stack);