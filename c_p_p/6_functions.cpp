#include <iostream>

using namespace std;

// functions

// syntax

// return_type function_name (arg_type_1 arg_1, arg_type_2 arg_2, ...) 
// {
//     ...
//     ...
//     ...
//     [if return_type is non void]
//         return something of type `return_type`;
// }

// example

int sum_of_four (int a, int b, int c, int d) 
{
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}

// goal: Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

int max_of_four(int a, int b, int c, int d)
{
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;

    return max;
}

int main() 
{
    int a, b, c, d;
    printf("Enter 4 space seperated integers followed by the enter key: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}
