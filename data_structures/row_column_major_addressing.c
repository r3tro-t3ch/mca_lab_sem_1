#include <stdio.h>
#include <stdlib.h>


// print matrix with number
void print_matrix_with_address(int** matrix, int m, int n){

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Matrix[%d][%d] -> %d, addr -> %p\n", i, j, matrix[i][j], &matrix[i][j]);
        }
    }

}

void print_matrix(int** matrix, int m, int n){

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}


// create matrix
int** create_row_major( int m, int n){
    int **matrix = (int**) calloc(m, sizeof(int));
    for(int i = 0; i < n;i++){
        matrix[i] = (int*) calloc(n, sizeof(int));
    }
    printf("Enter matrix elements row wise :\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    print_matrix(matrix, m, n);
    print_matrix_with_address(matrix, m, n);
    return matrix;
}

int** create_column_major( int m, int n){
    int **matrix = (int**) calloc(n, sizeof(int));
    for(int i = 0; i < n;i++){
        matrix[i] = (int*) calloc(m, sizeof(int));
    }
    printf("Enter matrix elements column wise:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    print_matrix(matrix, n, m);
    print_matrix_with_address(matrix, n, m);
    return matrix;
}


// find address
void find_address(int** matrix, int m, int n, int query_row, int query_column){
    int base_address = matrix;
    int offset = (query_row * m) + query_column;
    int addr = offset*sizeof(int) + base_address;
    printf("Matrix[%d][%d] -> %d, addr -> %u\n", query_row, query_column, matrix[query_row][query_column], addr);
}

int main(int argc, char **argv){

    int m,n, choice, query_m, query_n;
    int **matrix;
    printf("Enter order of matrix : \n");
    scanf("%d %d", &m, &n);

    printf("1. Row Major Addressing\n2. Column Major Addressing\n");
    scanf("%d", &choice);

    // input matrix
    switch (choice){
        case 1:{
            /* code */
            matrix = create_row_major(m,n);
            break;
        } 
        case 2:{
            /* code */
            matrix = create_column_major(m,n);
            break;
        }   
        default:{
            exit(0);
        }
    }

    // enter matrix
    printf("Enter the search coordinates (m, n) : ");
    scanf("%d %d", &query_m, &query_n);

    choice == 1? find_address(matrix, m, n, query_m, query_n) :  find_address(matrix, n, m, query_m, query_n) ;

    free(matrix);

    return 0;

}