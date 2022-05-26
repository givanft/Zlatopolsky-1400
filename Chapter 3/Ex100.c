#include <stdio.h>
#include <limits.h>

int main(void) {

	puts("*********************************************************************");
	puts("* FIND THE TWO LARGEST NUMBERS. YOU MAY INPUT EACH NUMBER ONLY ONCE.*");
	puts("* NO ARRAYS.                                                        *");
	puts("*********************************************************************");

	unsigned char attempts;
	signed char currentNum, numMax1, numMax2;

	attempts = 10;
	currentNum = numMax1 = numMax2 = SCHAR_MIN;

	while ((attempts--) > 0) {

		printf("Number of #%hhu (%hhi < X < %hhi): ", attempts + 1, SCHAR_MIN, SCHAR_MAX);

		if (scanf("%hhi", &currentNum) != 1) {

			puts("Not a number! Try again.");
			rewind(stdin);

			attempts++;

			continue;
		}

		printf("Accepted number: %hhi\n", currentNum);

		if (currentNum > numMax1) {

			if (numMax1 != SCHAR_MIN) numMax2 = numMax1;

			numMax1 = currentNum;
			continue;
		}

		if (currentNum > numMax2) numMax2 = currentNum;
	}

	printf("\nThe first larger number is %hhi\n", numMax1);
	printf("The second larger number is %hhi\n", numMax2);

	return 0;
}