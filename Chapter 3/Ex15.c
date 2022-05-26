#include "stdio.h"

unsigned char GetNumber(unsigned char, unsigned char);

int main(void) {

	puts("********************************************************************************************");
	puts("*Here is a 10-storey shelving split to 8 sections.                                         *");
	puts("*There are 15 places in each section for each storey.                                      *");
	puts("*Numerical starts as shown in the table below.                                             *");
	puts("*Get both the section number and the storey number with goods location by its place number.*");
	puts("*----------------------------------------------------------------*");
	puts("*|--------|Section1       |Section2       |           |Section8 |*");
	puts("*|Storey10|               |               |           |         |*");
	puts("*|  ...   |               |               |           |         |*");
	puts("*|Storey2 |121|122|...|   |               |           |         |*");
	puts("*|Storey1 | 1 | 2 |...|15 |16 |17 |...|30 |           |         |*");
	puts("******************************************************************");

	unsigned char   sections = 8,
					sectionPlaces = 15;

	unsigned short int placeNumber = 0;

	printf("%s", "Set the place number: ");
	scanf("%hu", &placeNumber);

	if (placeNumber == 0) {
		puts("There is no section with this number!");

		return 0;
	}

	unsigned char sectionNumber = 1;
	unsigned char storeyNumber = 1;

	if (placeNumber > sectionPlaces) {

       sectionNumber = GetNumber(placeNumber / sectionPlaces, placeNumber % sectionPlaces);

		// Get storey
       storeyNumber = GetNumber(sectionNumber / sections, sectionNumber % sections);

		// Get section
		sectionNumber %= sections;

		if (sectionNumber == 0)
			sectionNumber = sections;
	}

	printf("It is section #%hhu, at %hhu storey", sectionNumber, storeyNumber);

return 0;
}

/*
----------------------------------------------------------------------
 */
unsigned char GetNumber(unsigned char number, unsigned char remainder)
{
    if (remainder > 0)
        number ++;
    
    return number;
}