#include<iostream>
using namespace std;
// Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a loop.

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Multiplication table of " << n << " is: " << endl;
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout << n << " X " << i << " = " << n*i << endl;
    }
    return 0;
}