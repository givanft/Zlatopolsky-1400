#include "stdio.h"

int main(void) 
{

	puts("*****************************************************************");
	puts("*(0 < N < 65500) seconds pass away from the begginig of the day.*");
	puts("*Get - how many hours it is.                                    *");
	puts("*Get - how many minutes pass away from the last hour.           *");
	puts("*Get - how many seconds pass away from the last minute.          ");
	puts("*****************************************************************");

	unsigned int seconds = 0;

	printf("%s", "Set seconds that pass away: ");
	scanf("%u", &seconds);

	const unsigned short int SECONDS_PER_HOUR = 3600;
	const unsigned char SECONDS_PER_MINUTE = 60;

	printf("%hu hours it is.\n", seconds / SECONDS_PER_HOUR);
	printf("%hu minutes pass away from the last hour.\n", (seconds % SECONDS_PER_HOUR) / SECONDS_PER_MINUTE);
	printf("%hu seconds pass away from the last minute.\n", seconds % SECONDS_PER_MINUTE);

return 0;
}