#include<iostream>
using namespace std;
// Write a program that declares an array of integers and a pointer that points to the first element of the array.
// Use pointer arithmetic to print all the elements of the array.
int main()
{
    int arr[] = {10,20,30,40,50};
    int* ptr = &arr[0];
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << *ptr+i << endl;
    }
    return 0;    
}
