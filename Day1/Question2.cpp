#include<iostream>
using namespace std;
// Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.
int main()
{
    int g1,g2,g3,g4,g5;
    cout << "Enter grade 1: " ;
    cin >> g1;
    cout << "Enter grade 2: " ;
    cin >> g2;
    cout << "Enter grade 3: " ;
    cin >> g3;
    cout << "Enter grade 4: " ;
    cin >> g4;
    cout << "Enter grade 5: " ;
    cin >> g5;
    float average_grade = (g1+g2+g3+g4+g5)*1.0/5;
    printf("The average grade is: %.1f",average_grade);

    return 0;
}