#include<iostream>
using namespace std;
// You are given a image in n*m matrix now you have to rotate the image by 90 degree.
// Input : n=3, m=3 , image[3][3]={[1,2,3],[4,5,6],[7,8,9]}.
// Output = 
// 7 4 1
// 8 5 2
// 9 6 3
int main(){
    int n,m;
    cout << "Enter number of rows: ";cin >> n;
    cout << "Enter number of columns: ";cin >> m;
    int arr[n][m];
    int arrT[m][n];
    cout << "Enter the values of matrix row-wise: " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            arrT[j][i] = arr[i][j];
        }
    }
    for(int i = 0 ; i < m ; i++){
        for(int j = n - 1 ; j >= 0 ; j--){
            cout << arrT[i][j] << " ";
        }
        cout << endl;
    }

}