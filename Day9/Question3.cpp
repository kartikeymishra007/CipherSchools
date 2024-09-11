#include<iostream>
using namespace std;
// Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer,
// and a pointer to that pointer. Use all three to print the value of the integer.
int main()
{
    int var {69};
    int* ptr = &var;
    int** pttr = &ptr;
    cout << "Integer Variable: " << var << endl;
    cout << "Pointer to Integer: " << *ptr << endl;
    cout << "Pointer to Pointer: " << **pttr;
    return 0;
}