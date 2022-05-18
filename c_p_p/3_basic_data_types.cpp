/*
    Some C++ data types, their format specifiers, and their most common bit widths are as follows:
    
    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value

    READING

    scanf("`format_specifier`", &val)

    example:

    char ch;
    double d;
    scanf("%c %lf", &ch, &d);

    PRINTING

    printf("`format_specifier`", val)
    
    example:

    char ch = 'd';
    double d = 234.432;
    printf("%c %lf", ch, d);

    WHY NOT USE CIN AND COUT?
    printf() and scanf() are faster to use when
    there are large numbers of values to read.
*/

#include <iostream>
using namespace std;

int main()
{
    // Input consists of the following space-separated values: 
    // int, long, char, float, and double, respectively.
    // sample input: 3 12345678912345 a 334.23 14049.30493

    // Print each element on a new line in the same order it was received as input. 
    // Note that the floating point value should be correct up to 3 decimal places 
    // and the double to 9 decimal places.
    // sample output:
    // 3
    // 12345678912345
    // a
    // 334.230
    // 14049.304930000

    int integer;
    long int long_integer;
    char ch;
    float flo;
    double dou;

    printf("Please enter space seperated values as so: ");
    printf("'int long char float double' in this order and separated by spaces.");
    scanf("%d %ld %c %f %lf", &integer, &long_integer, &ch, &flo, &dou);

    printf("%d\n%ld\n%c\n%f\n%lf\n", integer, long_integer, ch, flo, dou);

    return 0;
}