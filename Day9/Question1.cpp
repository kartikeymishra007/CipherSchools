#include<iostream>
using namespace std;
// Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable.
//  Print the value of the variable using both the variable itself and the pointer.
int main()
{
    int var {10};
    int* ptr = &var;
    cout << "Using Variable: " << var << endl;
    cout << "Using poitner: " << *ptr << endl;
    return 0;
}