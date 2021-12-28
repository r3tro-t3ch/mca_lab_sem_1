#include <stdio.h>
#include "./includes/rational/rational.h"

int main( int argc, char **argv){
	
	// get rational number input
	rational_number_t* num_1 = new_rational_number(0,0);
	rational_number_t* num_2 = new_rational_number(0,0);

	printf("Enter numerator and denominator of first rational number\n");
	scanf("%d %d", &num_1->numerator, &num_1->denominator);
	print_rational_number(num_1);

	printf("Enter numerator and denominator of second rational number\n");
	scanf("%d %d", &num_2->numerator, &num_2->denominator);
	print_rational_number(num_2);

	rational_number_t* addition = add_rational_number(num_1, num_2);
	rational_number_t* multiplication = multiply_rational_number(num_1, num_2);
	int is_equal = is_rational_number_equal(num_1, num_2);

	printf("Addition : %d/%d\n", addition->numerator, addition->denominator);
	printf("Multiplication : %d/%d\n", multiplication->numerator, multiplication->denominator);

 	is_equal == 1 ?printf("Rational number equal\n") : printf("Rational number not equal\n") ;

	return 0;
}
