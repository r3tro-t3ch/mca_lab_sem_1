#include <stdio.h>
#include "./includes/string/string_operation.h"

int main( int argc, char **argv){

	char *str_1 = new_string();
	char *str_2 = new_string();

	printf("Enter two string : ");
	scanf("%s %s", str_1, str_2);
	printf("Concatenate : %s\n", concatenate_string(str_1, str_2));
	printf("Substring 1 : %s\n", sub_string(str_1, 1 ,3));
	printf("Substring 2 : %s\n", sub_string(str_1, 3, 6));
	printf("Comparison : %d\n", string_compare(str_1, str_2));
	printf("String length 1 : %d\n", string_len(str_1));
	printf("String length 2 : %d\n", string_len(str_2));

	return 0;
}
