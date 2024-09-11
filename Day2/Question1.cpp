#include<iostream>
using namespace std;
// Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.
int main()
{
    int n1,n2,n3;
    cout << "Enter the first number: " << endl;
    cin >> n1;
    cout << "Enter the second number: "<< endl;
    cin >> n2;
    cout << "Enter the third number: "<< endl;
    cin >> n3;
    if (n1 > n2 && n1 > n3)
    {
        cout << "The largest number is: " << n1;
    }
    else if(n2 > n1 && n2 > n3)
    {
        cout << "The largest number is: " << n2;
    }
    else{
        cout << "The largest number is: " << n3;
    }
    return 0;
}