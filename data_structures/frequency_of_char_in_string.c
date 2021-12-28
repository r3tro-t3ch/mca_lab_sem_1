#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STRING_LEN 100

int main( int argc, char **argv){

	char *input_string, query_char;
	int frequency = 0;

	input_string = (char *) calloc(STRING_LEN, sizeof(char));

	printf("Enter your string : ");
	scanf("%s", input_string);
	
	printf("Enter the char to check it's frequency : ");
	scanf("%s", &query_char);

	for( int i = 0; i < strlen(input_string); i++){

		if( input_string[i] == query_char ){
			frequency++;
		}

	}

	printf("Frequency of %c is %d\n", query_char, frequency);

	return 0;

}
