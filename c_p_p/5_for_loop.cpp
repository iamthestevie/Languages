#include <iostream>

using namespace std;

int main()
{
    // for loops

    // syntax
    // for ( <expression_1> ; <expression_2> ; <expression_3> )
    //     <statement>

    // expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
    // expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
    // expression_3 is generally used to update the flags/variables.

    // Goal: takes 2 integers into standard input (command line) a and b where a <= b
    // outputs the value in english if the value is less than or equal to 9
    // otherwise it outputs 'even' if the value is even or 'odd' if the value is odd.

    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    for (int i = a; i <= b; i++)
    {
        if (i > 9)
        {
            if (i % 2 == 0) 
            {
                cout << "even" << endl;
            } 
            else {
                cout << "odd" << endl;
            }
        }
        else if (i == 9) 
        {
            cout << "nine" << endl;
        }
        else if (i == 8)
        {
            cout << "eight" << endl;
        }
        else if (i == 7)
        {
            cout << "seven" << endl;
        }
        else if (i == 6)
        {
            cout << "six" << endl;
        }
        else if (i == 5)
        {
            cout << "five" << endl;
        }
        else if (i == 4)
        {
            cout << "four" << endl;
        }
        else if (i == 3)
        {
            cout << "three" << endl;
        }
        else if (i == 2)
        {
            cout << "two" << endl;
        }
        else if (i == 1)
        {
            cout << "one" << endl;
        }  
    }

    return 0;
}