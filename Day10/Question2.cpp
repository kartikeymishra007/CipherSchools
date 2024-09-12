#include<iostream>
#include<string>
#include<cctype>
using namespace std;
// Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome 
// (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. 
// Test your function with various strings in the main() function.
bool isPalindrome(const string &str)
{
    string s;
    int index {0};
    for(int i = 0 ; i < str.size(); i++)
    {
        if(isalpha(str[i]))
        {
            s[index++] = str[i];
        }
    }
    int n = s.size();
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] != s[n - 1 - i]){
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    if (isPalindrome(str))
        cout << "Is Palindrome: True";
    else 
        cout << "Is Palindrome: False";
    return 0;
}