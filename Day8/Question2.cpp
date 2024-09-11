#include<iostream>
#include<string>
using namespace std;
//  Implement a function int countCharacter(const std::string &str, char ch) 
// that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.
int countCharacter(const string &str,char ch){
    int cc{0};
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] == ch){
            cc++;
        }
    }
    return cc;    
}
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin,str);
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    cout << "Occurence: " << countCharacter(str,ch);
    return 0;
}