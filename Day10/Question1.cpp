#include<iostream>
using namespace std;
// Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. 
// Test your function with various arrays in the main() function.
int findMax(int arr[], int n)
{
    int max = arr[0];
    for(int i = 1; i < n ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];            
        }
    }
    return max;
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum value in the array:  " << findMax(arr,n);
    return 0;
}