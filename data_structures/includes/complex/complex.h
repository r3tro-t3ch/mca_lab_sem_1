#ifndef COMPLEX_H
#define COMPLEX_H

#define ADD 1
#define SUBTRACT 0

typedef struct COMPLEX_NUMBER_T{
	int real, imaginary;
} complex_number_t;

// create complex number
complex_number_t* new_complex_number( int real, int imaginary);

// add complex number
complex_number_t* add_complex_number( complex_number_t* num_1, complex_number_t* num_2, int addition_flag);

// multiply complex number
complex_number_t* multiply_complex_number( complex_number_t* num_1, complex_number_t* num_2);

// print complex number
void print_complex_number( complex_number_t *num);


#endif
