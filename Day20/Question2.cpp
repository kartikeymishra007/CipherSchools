#include<iostream>
using namespace std;
//  Write a C++ program that take 2D array from user and then sort this array. 
// Input n=3, m=3 array=7 4 1
// 8 5 2
// 9 6 3
// output :- 1 2 3
// 4 5 6
// 7 8 9
void insertionSort(int arr[],int n){
    for(int i = 0 ;i < n ; i++){
        int curr=arr[i];
        int j=i;
        while(j > 0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main(){
    int n,m;
    cout << "Enter number of rows: ";cin >> n;
    cout << "Enter number of columns: ";cin >> m;
    int size = m * n;
    int a[size];
    cout << "Enter the values of matrix row-wise: " << endl;
    int k = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[k++];
        }
    }
    insertionSort(a,size);
    k = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << a[k++] << " ";
        }
        cout << endl;
    }
    return 0;
}