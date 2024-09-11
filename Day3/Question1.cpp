#include<iostream>
using namespace std;
// Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum {0};
    for(int i {1}; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of first " << n <<" natural numbers is: " << sum;
    return 0;
}