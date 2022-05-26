#include "stdio.h"

int main(void) {

	puts("***********************************");
	puts("* Set the distance in centimeter. *");
	puts("* Get the result in meter.        *");
	puts("***********************************");

	unsigned short int centimeter = 0;

	puts("Set the distance in centimeter:");
	scanf("%hu", &centimeter);

	printf("Here is: %hu meters\n", centimeter / 100);

    return 0;
}