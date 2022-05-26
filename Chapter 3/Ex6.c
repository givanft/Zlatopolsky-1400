#include "stdio.h"

int main(void) 
{

	puts("*********************************************************");
	puts("*Here is a railway carriage with (N < 250) compartmnets.*");
	puts("*Each compartment has (K < 250) places.                 *");
	puts("*Get the compartment number with specific place (P).    *");
	puts("*********************************************************");

	unsigned char n = 0;
	unsigned char k = 0;

	printf("%s", "Set compartment count:");
	scanf("%hhu", &n);

	if (n == 0) {
		puts("No compartments !");
		return 0;
	}

	printf("%s", "Set places count for each compartment:");
	scanf("%hhu", &k);

	unsigned short int p = 0;

	printf("%s", "Set specific place:");
	scanf("%hu", &p);

	unsigned short int low = 0, top = 0;
	unsigned char placeFound = 0;

	for (unsigned char i = 0; i < n; i++) {

		low = i * k;
		top = (i + 1) * k;

		if (low < p && p <= top) {
			placeFound = (i + 1);
			break;
		}
	}

	if (placeFound == 0)
		puts("There is no compartment with such place !");
	else
		printf("It is in compartment #%hhu !\n", placeFound);
}