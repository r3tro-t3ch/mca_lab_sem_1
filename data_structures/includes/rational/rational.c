#include <stdlib.h>
#include <stdio.h>
#include "./rational.h"


// create rational number
rational_number_t* new_rational_number( int numerator, int denominator){
	rational_number_t *num = (rational_number_t*) calloc(1, sizeof(rational_number_t));
	num->numerator = numerator;
	num->denominator = denominator;
	return num;	
}

// add two rational number
rational_number_t* add_rational_number( rational_number_t *num_1, rational_number_t *num_2){
	rational_number_t *num = new_rational_number(0,0);
	num->numerator = num_1->numerator * num_2->denominator + num_2->numerator * num_1->denominator;
	num->denominator = (num_1->denominator*num_2->denominator) * 2;
	num->denominator = (num_1->denominator*num_2->denominator) * 2;
	return num;
}

// multiply two rational number
rational_number_t* multiply_rational_number( rational_number_t *num_1, rational_number_t *num_2){
	rational_number_t *num = new_rational_number(0,0);
	num->numerator = num_1->numerator * num_2->numerator;
	num->denominator = (num_1->denominator*num_2->denominator);
	return num;
}

// equality check
int is_rational_number_equal( rational_number_t *num_1, rational_number_t *num_2){
	if( num_1->numerator * num_2->denominator == num_2->numerator * num_1->denominator ){
		return true;
	}else{
		return false;
	}	
}

// print rational number
void print_rational_number( rational_number_t* n){
	printf("number : %d/%d\n", n->numerator, n->denominator);
}
