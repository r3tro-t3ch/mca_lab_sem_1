#ifndef RATIONAL_H
#define RATIONAL_H

#define true 1
#define false 0

typedef struct RATIONAL_NUMBER_T{
	
	int numerator, denominator

}rational_number_t;

// create rational number
rational_number_t* new_rational_number( int numerator, int denominator);

// add two rational number
rational_number_t* add_rational_number( rational_number_t *num_1, rational_number_t *num_2);

// multiply two rational number
rational_number_t* multiply_rational_number( rational_number_t *num_1, rational_number_t *num_2);

// equality check
int is_rational_number_equal( rational_number_t *num_1, rational_number_t *num_2);

// print rational number
void print_rational_number( rational_number_t* n);

#endif
