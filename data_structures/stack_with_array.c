#include <stdio.h>
#include <stdlib.h>

// print stack
void print_stack(int *stack, int top){
    printf("[");
    for(int i = 0; i < top + 1; i++){
        printf(" %d ", stack[i]);
    }
    printf("]\n");
}

int main(int argc, char **argv){

    int choice, stack_size, top = -1;

    printf("Stack size : ");
    scanf("%d", &stack_size);

    int stack[stack_size];

    while (1){
        
        printf("1. Push\n2. Pop\n3. Print\n99. exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:{
                if( top >= stack_size - 1){
                    printf("Overrflow\n\n");
                    break;
                }
                printf("Element : ");
                int element;
                scanf("%d", &element);
                top++;
                stack[top] = element;
                print_stack(stack, top);
                break;
            }
            case 2:{
                if(top < 0){
                    printf("Underflow\n\n");
                    break;
                }
                int element = stack[top];
                top--;
                printf("Popped : %d\n", element);
                print_stack(stack, top);
                break;
            }
            case 3:{
                print_stack(stack, top);
                break;
            }
            case 99:{
                exit(0);
                break;
            }
        
            default:{
                printf("Invalid!!\n");
            }
            
        }
        printf("\n\n");
    }
    return 0;
}