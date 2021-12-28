#include <stdio.h>
#include <stdlib.h>
#include "./complex.h"

// create complex number
complex_number_t* new_complex_number( int real, int imaginary){
	complex_number_t* num = (complex_number_t*) calloc(1, sizeof(complex_number_t));
	num->real = real;
	num->imaginary = imaginary;
	return num;
}

// add complex number
complex_number_t* add_complex_number( complex_number_t* num_1, complex_number_t* num_2, int addition_flag){
	switch(addition_flag){
		case ADD : {
			return new_complex_number( num_1->real + num_2->real, num_1->imaginary + num_2->imaginary);
		}
		case SUBTRACT : {
			return new_complex_number( num_1->real - num_2->real, num_1->imaginary - num_2->imaginary);
		}
		default : {
			return NULL;
		}
	}
}

// multiply complex number
complex_number_t* multiply_complex_number( complex_number_t* num_1, complex_number_t* num_2){
	return new_complex_number( 
		num_1->real * num_2->real - num_1->imaginary * num_2->imaginary,
		num_1->imaginary * num_2->real + num_1->real * num_2->imaginary
	);
}

// print complex number
void print_complex_number( complex_number_t *num){
	num->imaginary >= 0 ? printf("%d + %di\n", num->real, num->imaginary) : printf("%d %di\n", num->real, num->imaginary);
}

