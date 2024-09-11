#include<iostream>
using namespace std;
// Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int factorial {1};
    for(int i = 1 ; i <= n ; i++)
    {
        factorial *= i ;
    }
    cout << "The factorial of " << n << " is: " << factorial;
    return 0;
}