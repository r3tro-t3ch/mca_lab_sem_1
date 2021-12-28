#include <stdio.h>
#include "./includes/stack/stack.h"

int main(int argc, char **argv){

    int ele = 10, ele_2 = 20, ele_3 = 30;
    stack_t *stack = create_stack();
    push(stack, ele);
    print_stack(stack);
    push(stack, ele_2);
    print_stack(stack);
    push(stack, ele_3);
    print_stack(stack);
    pop(stack);
    print_stack(stack);
    pop(stack);
    print_stack(stack);
    pop(stack);
    print_stack(stack);
    pop(stack);

    return 0;
}