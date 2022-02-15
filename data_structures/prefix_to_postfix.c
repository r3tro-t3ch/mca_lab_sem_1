#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 20
char stack[STACK_SIZE][20], top = -1;

void push( char *element){
    top++;
    strcpy(stack[top],element);
}

char* pop(){
    if(top == -1){
        return NULL;
    }else{
        char *c = calloc(strlen(stack[top]), sizeof(char));
        c = stack[top];
        top--;
        return c;
    }
}

void print_stack(){
    printf("[");
    for ( int i = 0; i < top + 1; i++){
        printf(" %s ", stack[i]);
    }
    printf("]\n");
}

char *strrev(char *str){
    int len = strlen(str);
    char *reverse = (char*)calloc(len, sizeof(char));
    int j = len - 1;
    for(int i = 0; i < len; i++){
        reverse[j] = str[i];
        j--;
    }
    return reverse;
}

int main(int argc, char **argv){

    char *prefix = "-*+582/62";

    char *nearly_postfix = strrev(prefix);

    printf("Reverse : %s\n", nearly_postfix);

    for(int i = 0; i < strlen(prefix); i++){

        switch(nearly_postfix[i]){
            case '+':
            case '-':
            case '*':
            case '/':{
                char* left = pop();
                char* right = pop();
                printf("%s %s\n", left, right);
                char* exp = (char*)calloc((strlen(left) + strlen(right) + 1), sizeof(char));
                strcat(exp, left);
                strcat(exp, right);
                char *op = (char*) calloc(1,1);
                *op = nearly_postfix[i];
                strcat(exp, op);
                push(exp);
                printf("Expression : %s\n", exp);
                break;
            }
            default : {
                char *exp = (char*) calloc(1,1);
                *exp = nearly_postfix[i];
                push(exp);
                break;
            }
        }

        print_stack();

    }

    printf("Postfix : %s\n", pop());


    return 0;

}