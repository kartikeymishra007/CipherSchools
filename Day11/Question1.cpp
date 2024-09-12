#include<iostream>
using namespace std;
// You are given an array and target value. Your task is to find the target value that exists in the array. 
// If it exists inside an array then print YES otherwise NO.
bool found(int arr[],int n,int target)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
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
    if (found(arr,n,target))
        cout << "YES";
    else
    {
        cout << "NO";
    }
    return 0;
}