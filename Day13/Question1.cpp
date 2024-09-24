#include<iostream>
using namespace std;
int main(){
    int* ptr = new int;
    *ptr = 62;
    cout << *ptr;
    return 0;
}