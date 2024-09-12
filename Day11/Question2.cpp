#include<iostream>
using namespace std;
// You are given an array and target value. You have to find the index of target value. 
// If target doest exist inside the array then print -1.Assume indexing is 1 based.
int found(int arr[],int n,int target)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == target)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter all the elements of the array: ";
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    cout << found(arr,n,target);
    return 0;
}