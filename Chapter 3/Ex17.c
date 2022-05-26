#include "stdio.h"

unsigned char GetSumOfDigits(unsigned char);

/*
 *-------------------------------------------------
 */
int main(void) {

	puts("*****************************");
	puts("*Set a number (0 < N < 255).*");
	puts("*Get sum of their digits.   *");
	puts("*****************************");

	unsigned char number = 0;

	printf("%s", "Set a number: ");
	scanf("%hhu", &number);

	printf("Sum of their digits is: %hhu.", GetSumOfDigits(number));

return 0;
}

/*
 *-------------------------------------------------
 */
unsigned char GetSumOfDigits(unsigned char number)
{
	unsigned char div = number / 10;
	unsigned char remainder = number % 10;

	if (div == 0)
		return remainder;
	else
		return remainder + GetSumOfDigits(div);
}