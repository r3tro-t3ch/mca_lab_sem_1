#include "string_operation.h"
#include <stdlib.h>

// create string
char* new_string(){
	char *str = (char*) calloc( INIT_STRING_LEN, sizeof(char));
	return str;
}

// length
int string_len(char *str){
	int len = 0;
	while(str[len] != '\0'){
		len++;
	}
	return len;
}

// concatenate string
char* concatenate_string(char *str_1, char *str_2){
	int new_string_length = string_len(str_1) + string_len(str_2);
	int second_string_index = 0;
	for(int i = string_len(str_1); i < new_string_length; i++){
		str_1[i] = str_2[second_string_index];
		second_string_index++;
	}
	str_1[string_len(str_1) + 1] = '\0';
	return str_1;
}

// subtring
char* sub_string(char *str, int start_index, int stop_index){
	char* sub_string = (char*) calloc(stop_index - start_index + 1, sizeof(char));
	int sub_string_index = 0;
	for(int i = start_index; i <= stop_index; i++){
		sub_string[sub_string_index] = str[i];
		sub_string_index++;
	}
	sub_string[sub_string_index] = '\0';
	return sub_string;
}

// compare
int string_compare(char *str_1, char *str_2){
	if( string_len(str_1) != string_len(str_2)){
		return INEQUAL_STRING;
	}
	int equal_flag = 0;
	for(int i = 0; i < string_len(str_1); i++){
		if(str_1[i] != str_2[i]){
			equal_flag = 1;
			break;
		}
	}

	if(equal_flag == 0) 
		return EQUAL_STRING;
	else
		return INEQUAL_STRING;

}





