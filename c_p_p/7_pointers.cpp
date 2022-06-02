#include <iostream>

using namespace std;

/*
Pointers

Syntax:
int* p = &val;

int* p;	--> 'p' is a pointer to int type

&val	--> '&' prepended to a variable returns the memory address.
*/

void increment(int *v)
{
	(*v)++;
}

void update(int *a, int *b)
{
	// modify the values in memory
	// so that 'a' contains (a + b)
	// and 'b' contains |a - b|
	cout << "inside update." << endl;
	cout << "a: " << a << " *a: " << *a << endl; 
	cout << "b: " << b << " *b: " << *b << endl;

	int a_temp = *a, b_temp = *b;
	*a = a_temp + b_temp;
	*b = abs(a_temp - b_temp);
}

int main()
{
	cout << "Increment" << endl;
	int a, b;
	printf("Enter a value to be incremented: ");
	scanf("%d", &a);
	increment(&a);
	printf("%d\n", a);

	cout << "Update" << endl;
	int *pa = &a, *pb = &b;
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d\n", a, b);

	return 0;
}
