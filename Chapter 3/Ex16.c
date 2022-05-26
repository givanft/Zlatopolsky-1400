#include "stdio.h"

int main(void) 
{
	
	puts("********************************************");
	puts("*Set 2-digit number.                       *");
	puts("*Get: 1. Number of tens; 2. Number of ones.*");
	puts("********************************************");

	unsigned char number = 0;

	do {
		printf("%s", "Set a 2-digit number: ");
		scanf("%hhu", &number);

	}while(number < 10 || number / 10 > 9);

	printf("Number of tens: %hhu\nNumber of ones: %hhu.", number / 10, number % 10);

return 0;
}								