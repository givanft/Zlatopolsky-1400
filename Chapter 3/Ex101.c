
#include <stdio.h>

int main(void) 
{

	puts("*************************************");
	puts("* GET THE MULTIPLICATION TABLE BY N *");
	puts("*************************************");

	unsigned char N = 1;

	do {
		printf("%s", "Set table dimension (0 < N < 30):");

		if (scanf("%hhu", &N) != 1) {
			puts("Not a number! Try again.");
			rewind(stdin);
			continue;
		}

		if ((N < 2) || (N > 30)) {
			puts("Not a valid number! Try again.");
			rewind(stdin);
			continue;
		}

		break;
	}while(0==0);

	printf("\nMultiplication Table (by %hhu)\n", N);

	for (unsigned char i = 1; i <= N; i++) {

		unsigned short int product = 0;
		for (unsigned char j = 1; j <= N; j++) {

			product = i * j;
			product == i ? printf("%3hu|", product) : printf("%4hu", product);
		}

		printf("\n");

		if (i == 1) {
			for (unsigned char x = 0; x++ < (4 * N); printf("%c", '-'));
			printf("\n");
		}
	}

	puts("\n");
	return 0;
}