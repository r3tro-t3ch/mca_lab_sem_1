#include <stdio.h>
#include <stdlib.h>

// print matrix
void print_matrix(int** matrix, int m){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// create matrix
int** create_square_matrix(int m){
    int** matrix = (int**) calloc(m, sizeof(int));
    for(int i = 0; i < m; i++){
        matrix[i] = (int*)calloc(m, sizeof(int));
    }
    // enter matrix
    printf("Enter matrix elements : \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    print_matrix(matrix, m);
    return matrix;
}

void find_saddle_point(int** matrix, int m){
    
    int min, max, min_i, min_j, max_i, max_j;
    int saddle_flag = 0;
    for(int i = 0; i < m; i++){
        min = matrix[i][0];
        for(int j = 0; j < m; j++){
            if(min >= matrix[i][j]){
                min = matrix[i][j];
                min_i = i;
                min_j = j;
            }
        }
        int j = min_j;
        max = matrix[0][j];
        for( int k = 0; k < m; k++){
            if(max < matrix[k][j]){
                max = matrix[k][j];
                max_i = k;
                max_j = j;
            }
        }

        if(min == max){
            if( min_i == max_i && min_j == max_j){
                saddle_flag = 1;
                printf("Matrix[%d][%d] -> %d\n", min_i, min_j, min);
            }
        }

        

    }

    if(saddle_flag == 0){
        printf("No Saddle Point\n");
    }

}

int main(int argc, char **argv){

    int m, **matrix;
    // input matrix order
    printf("Enter Order of Matrix (m) : ");
    scanf("%d", &m);

    matrix = create_square_matrix(m);

    find_saddle_point(matrix, m);

    free(matrix);

    return 0;
}