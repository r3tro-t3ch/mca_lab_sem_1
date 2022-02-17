#include <stdio.h>
#include "./includes/stack/stack.h"
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int choice;
    stack_t *stack = new_stack();
    while (true){
        printf("1.Push \t2.Pop\t3.Size\t4.Print Stack\t99. Exit\n");
        scanf("%d", &choice);
        switch (choice){
            case 1:{
                int element;
                printf("Element : ");
                scanf("%d", &element);
                push(element, stack);
                print_stack(stack);
                break;
            }
            case 2:{
                node_t* element = pop(stack);
                if( element == NULL){
                    printf("Underflow.\n");
                    break;
                }
                printf("Popped : %d\n", element->data);
                print_stack(stack);
                free_node(element);
                break;
            }
            case 3:{
                printf("Size : %d\n", stack->size);
                break;
            }
            case 4:{
                print_stack(stack);
                break;
            }
            case 99: {
                exit(0);
                break;
            }
            default:
                break;
        }
    }
    

    return 0;
}