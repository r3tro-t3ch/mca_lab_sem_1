#include "./includes/complex/complex.h"
#include <stdio.h>

int main(int argc, char **argv){

	complex_number_t* num_1 = new_complex_number(0,0);
	complex_number_t* num_2 = new_complex_number(0,0);

	printf("Enter real and imaginary part of first complex number : \n");
	scanf("%d %d", &num_1->real, &num_1->imaginary);
	print_complex_number(num_1);

	printf("Enter real and imaginary part of second complex number : \n");
	scanf("%d %d", &num_2->real, &num_2->imaginary);
	print_complex_number(num_2);

	printf("Addition : ");
	print_complex_number( add_complex_number(num_1, num_2, ADD));

	printf("Subtraction : ");
	print_complex_number( add_complex_number(num_1, num_2, SUBTRACT));

	printf("Multiplication : ");
	print_complex_number( multiply_complex_number(num_1, num_2));

	return 0;
}
