#include<iostream>
#include<string>
using namespace std;
// Write a function int stringLength(const std::string &str) that returns the length of a given string.
// Test your function with various strings in the main() function.
int stringLength(const string &str) {
    return str.size();
}
int main()
{
    string str;
    getline(cin,str);
    cout << stringLength(str);
    return 0;    
}