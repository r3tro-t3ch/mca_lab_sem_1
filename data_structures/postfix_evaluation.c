#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 20
int stack[STACK_SIZE], top = -1;

void push( int element){
    top++;
    stack[top] = element;
}

int pop(){
    if(top == -1){
        return -999;
    }else{
        int c = stack[top];
        top--;
        return c;
    }
}

void print_stack(){
    printf("[");
    for ( int i = 0; i < top + 1; i++){
        printf(" %d ", stack[i]);
    }
    printf("]\n");
}



int main(int argc, char **argv){

    char *postfix = "22+3*9-";

    for(int i = 0; i < strlen(postfix); i++){

        switch(postfix[i]){
            case '+':{
                int right = pop();
                int left = pop();
                push(left + right);
                break;
            }
            case '-':{
                int right = pop();
                int left = pop();
                push(left - right);
                break;
            }
            case '*':{
                int right = pop();
                int left = pop();
                push(right * left);
                break;
            }
            case '/':{
                int right = pop();
                int left = pop();
                push(left / right);
                break;
            }
            default : {
                char *exp = (char*) calloc(1,1);
                *exp = postfix[i];
                push(atoi(exp));
                break;
            }
        }

        print_stack();

    }

    printf("Answer : %d\n", pop());


    return 0;

}