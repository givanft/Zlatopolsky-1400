#include "stdio.h"

int main(void) {

	puts("***************************************");
	puts("* N children shares K apples.         *");
	puts("* How many apples takes each of them? *");
	puts("* How many remains?                   *");
	puts("***************************************");

	unsigned char childrenCount = 0;
	unsigned char applesCount = 0;

	puts("Set number of children (0 < N < 255) and number of apples (0 < K < 255):");
	scanf("%hhu %hhu", &childrenCount, &applesCount);

	if (childrenCount <= 0)
		puts("No children !");
	else if (childrenCount > applesCount)
		puts("Not enough apples for all children !");
	else
	{
		printf("%hhu apples takes each of them!\n", applesCount / childrenCount);
		printf("%hhu remains!\n", applesCount % childrenCount);
	}

return 0;
}