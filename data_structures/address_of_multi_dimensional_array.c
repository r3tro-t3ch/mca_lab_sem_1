#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){

    // input number of dimesions
    int dimension;
    printf("Enter the number of dimesnions : ");
    scanf("%d", &dimension);

    // create element count array
    int multi_dimensional_array[dimension], query_coordinate[dimension];

    // input element count
    printf("Enter elements in each dimension : \n");
    for(int i = 0; i < dimension; i++){
        printf("dimesion[%d] -> ", i);
        scanf("%d", &multi_dimensional_array[i]);
    }

    // input data type
    printf("Enter datatype :\n1. Int\n2. Float\n3. Char\n4. Double\n");
    int data_type, data_type_size;
    scanf("%d", &data_type);

    // get data type size
    switch (data_type){
        case 1:{
            data_type_size = sizeof(int);
            break;
        }
        case 2:{
            data_type_size = sizeof(float);
            break;
        }
        case 3:{
            data_type_size = sizeof(char);
            break;
        }
        case 4:{
            data_type_size = sizeof(double);
            break;
        }   
        default:{
            printf("Invalid choice\n");
            exit(0);
        }
    }

    int base_addr = 0, product, sum = 0;

    // input the element address
    printf("Enter the address of %d dimesional array : \n", dimension);
    for(int i = 0; i < dimension; i++){
        scanf("%d", &query_coordinate[i]);
    }

    for(int i = 0; i < dimension; i++){
        product = query_coordinate[i];

        for(int j = i; j < dimension; j++ ){
            product *= multi_dimensional_array[j];
        }
        sum += product;
    }

    int addr = base_addr + (data_type_size * sum);

    printf("Address -> %d\n", addr);

    return 0;
}