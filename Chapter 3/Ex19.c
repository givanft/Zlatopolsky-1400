#include "stdio.h"
#include "math.h"

unsigned char GetQuantityDigits(unsigned short int);

int main(int argc, char *argv[])
{

    puts("*************************************************");
    puts("* Set a number (99 < N < 1000).                 *");
    puts("* Get their digits separated by comas and space *");
    puts("*************************************************");

    unsigned short int number = 0;

    /**************************************************/
    do
    {
        printf("%s", "Set a number (99 < N < 1000): ");

        if (scanf("%hu", &number) != 1)
        {

            puts("Not a number! Try again.");
            rewind(stdin);

            continue;
        }

    } while (number < 99 || number > 999);

    /**************************************************/
    
    unsigned short int module = pow(10, GetQuantityDigits(number) - 1);
    unsigned char tempNumber = 0;

    printf("%s", "Digits: ");

    while(module != 1)
    {
        tempNumber = number / module;

        printf("%hhu, ", tempNumber);
        
        number %= module;
        module /= 10;            
    }

    printf("%hu", number);

    return 0;
}

/*
 *   Get quantity digits of a number
 */
unsigned char GetQuantityDigits(unsigned short int number)
{
    unsigned char count = 0;

    while(number != 0)
    {
        number /= 10;
        count ++;
    }

return count;
}