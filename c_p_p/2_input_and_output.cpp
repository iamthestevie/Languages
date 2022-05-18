/*
    INPUT AND OUTPUT
*/

#include <iostream>
using namespace std;

int main()
{
    // read "High 5" from the command line into two variables
    string s;
    int n;

    // cin reads a single whitespace seperated token
    cout << "Type 'High 5' followed by the enter key: ";
    cin >> s >> n;

    // cout prints output to standard output
    cout << s << " " << n << endl;

    // read 3 numbers from stdin and print their sum to stdout
    int a;
    int b;
    int c;

    cout << "Enter three space seperated numbers followed by the enter key: ";
    cin >> a >> b >> c;

    int sum;
    sum = a + b + c;
    cout << "The sum of the three numbers entered is: " << sum << endl;

    return 0;
}