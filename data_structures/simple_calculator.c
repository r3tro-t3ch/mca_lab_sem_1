#include <stdio.h>

int main( char argc, char **argv){

	int num_1, num_2, choice;

	printf("Enter two numbers\n");

	scanf("%d %d", &num_1, &num_2);

	printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter your choice : ");

	scanf("%d", &choice);

	switch(choice){
		case 1 : {
			printf("Addition : %d\n", num_1 + num_2);
			break;
		}
		case 2 : {
			printf("Subtraction : %d\n", num_1 - num_2);
			break;
		}
		case 3 : {
			printf("Multiplication : %d\n", num_1 * num_2);
			break;
		}
		case 4 : {
			printf("Division : %d\n", num_1 / num_2);
			break;
		}
		default : {
			printf("Invalid option\n");
		}
	}

	return 0;

}
