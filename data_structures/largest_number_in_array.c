#include <stdio.h>


int main( int argc, char **argv){

	int array_length;

	printf("Enter the number of elements : ");
	scanf("%d", &array_length);

	int array[array_length];
	int largest = 0;

	printf("Enter array elements : \n");
	for( int i = 0; i < array_length; i++){
		scanf("%d", &array[i]);
		if( array[i] > largest ){
			largest = array[i];
		}
	}


	printf("Largest : %d\n", largest);

	return 0;

}

