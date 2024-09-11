#include<iostream>
#include<string>
using namespace std;
// Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.
int main()
{
    string s1,s2;
    cout << "Enter the first string: " ;
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    cout << "Concatenated string: " << s1+s2;
    return 0;
}