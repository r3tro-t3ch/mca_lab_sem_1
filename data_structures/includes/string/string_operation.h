#ifndef STRING_OPERATION_H
#define STRING_OPERATION_H

#define INIT_STRING_LEN 100
#define EQUAL_STRING 0
#define INEQUAL_STRING 1

// create string
char* new_string();

// length
int string_len(char *str);

// concatenate string
char* concatenate_string(char *str_1, char *str_2);

// subtring
char* sub_string(char *str, int start_index, int stop_index);

// compare
int string_compare(char *str_1, char *str_2);

#endif
