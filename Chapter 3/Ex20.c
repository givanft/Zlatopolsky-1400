#include <stdio.h>

int main(int argc, char* argv[])
{
    puts("*************************************************");
    puts("* Set a number (0 < N < 65535).                 *");
    puts("* Get number of units, tens, hundreds and so on *");
    puts("* Get sum of their numbers                      *");
    puts("* Get product of their numbers                  *");
    puts("*************************************************");

    unsigned short int number = 4320,
                        product = 1;

    unsigned char remainder = 0,
                    unit = 0,
                    sum = 0;
    
    const unsigned char module = 10;

    printf("%s", "Set number: ");
    scanf("%hu", &number);

    do {
        remainder = number % module;
        unit ++;

        char* unitTitle = "Units";
        switch(unit)
        {
            case 2: unitTitle = "Tens"; break;
            case 3: unitTitle = "Hundreds"; break;
            case 4: unitTitle = "Thousands"; break;
            case 5: unitTitle = "Ten of thousands"; break;
        }

        printf("%s: %hhu\n", unitTitle, remainder);

        if (product != 0) 
        {
            if (remainder == 0)
                product = 0; // No need to do muliplication in case if any digit is 0
            else
                product *= remainder;
        }

        sum += remainder;
        
        number /= module;

    }while(number > 0);

    printf("Product of digits: %hu\n", product);
    printf("Sum of digits: %hhu\n", sum);

return 0;
}