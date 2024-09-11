#include<iostream>
#include<string>
using namespace std;
// Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) 
// that concatenates two strings and returns the result. Test the function with various input strings.
string concatenateStrings(const string &str1, const string &str2)
{
    return str1+str2;
}
int main()
{
        string str1,str2;
        cout << "Enter Str1: ";
        getline(cin,str1);
        cout << "Enter Str2: ";
        getline(cin,str2);
        cout << "Output: " << concatenateStrings(str1,str2);
        return 0;
}