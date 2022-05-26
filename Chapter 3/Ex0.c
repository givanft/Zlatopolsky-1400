#include <stdio.h>

int main(void)
{
 	const char* s = "Hello";

	printf("\n\n-----------------------------------");
	printf("\nStrings - padding:");
    printf("\n%%10s[%s]:\t|%10s|", s, s);
	printf("\n%%-10s[%s]:\t|%-10s|", s, s);
	printf("\n%%*s[%s(%i)]:\t|%*s|", s, 20, 20, s);
	
	printf("\n\n-----------------------------------");
	printf("\nStrings - truncating:");
	printf("\n%%.4s[%s]:\t|%.4s|", s, s);
	printf("\n%%.*s[%s(%i)]:\t|%.*s|", s, 3, 3, s);

	printf("\n\n-----------------------------------");
	printf("\nCharacters:");
	printf("\n%%c[%i]:\t|%c|", 65, 65);
	printf("\n%%:\t|%%|");

	printf("\n\n-----------------------------------");
	printf("\nIntegers (Decimal):");
	printf("\n%%6d[%d]:\t|%6d|", 1234, 1234);
	printf("\n%%-6d[%d]:\t|%-6d|", 1234, 1234);
	printf("\n%%d[%i]:\t\t|%d|", 1, 1);
	printf("\n%%i[%d]:\t\t|%i|", 2, 2);
	printf("\n%%.6d[%i]:\t|%.6d|", 3 , 3);
	printf("\n%%d[%i]:\t\t|%d|", 0, 0);
	printf("\n%%.0d[%i]:\t|%.0d|", 0, 0);
	printf("\n%%+d[%i]:\t\t|%+d|", 4, 4);
	printf("\n%%d[%i]:\t\t|%d|", -4, -4);

	printf("\n\nIntegers (Hexadecimal):");
	printf("\n%%x5:\t|%x|", 5);
	printf("\n%%x10:\t|%x|",10);
	printf("\n%%X10:\t|%X|", 10);
	printf("\n%%#x6:\t|%#x|", 6);

	printf("\n\nIntegers (Octal):");
	printf("\n%%o[%i]:\t\t|%o|", 10, 10);
	printf("\n%%#o[%i]:\t|%#o|", 10, 10);
	printf("\n%%#o[%i]:\t\t|%#o|", 4, 4);

	printf("\n\n-----------------------------------");
	printf("\nFloating point (Rounding):");
	printf("\n%%f[%f]:\t\t|%f|", 1.5, 1.5);
	printf("\n%%.0f[%f]:\t\t|%.0f|", 1.5, 1.5);
	printf("\n%%.32f[%f]:\t|%.32f|", 3.14, 3.14);

	printf("\n\nFloating point (Padding):");
	printf("\n%%05.2f[%f]:\t|%05.2f|", 1.5, 1.5);
	printf("\n%%.2f[%f]:\t\t|%.2f|", 1.5, 1.5);
	printf("\n%%5.2f[%f]:\t|%5.2f|", 1.5, 1.5);
	printf("\n%%-5.2f[%f]:\t|%-5.2f|", 1.5, 1.5);
	printf("\n%%6.4f[%f]:\t|%6.4f|", 123.45, 123.45);

	printf("\n\nFloating point (Scientific):");
	printf("\n%%e[%f]:\t\t|%e|", 123.45, 123.45);
	printf("\n%%12.4e[%f]:\t|%12.4e|", 123.45, 123.45);
	printf("\n%%-12.3e[%f]:\t|%-12.3e|", 123.45, 123.45);
	printf("\n%%6.2e[%f]:\t|%6.2e|", 123.45, 123.45);
	printf("\n%%10.3g[%g]:\t|%10.3g|", 0.000012345, 0.000012345);

	printf("\n\nFloating point (Hexadecimal):");
	printf("\n%%a[%f]:\t|%a|", 1.5, 1.5);
	printf("\n%%A[%f]:\t|%A|", 1.5, 1.5);

	printf("\n\n-----------------------------------");

return 0;
}