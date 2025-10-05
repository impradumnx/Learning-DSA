// Program to print Grade according to the marks.

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;
    if(marks >= 90){
        cout << "Grade A";
    } else if(marks >= 80 && marks <= 90){
        cout << "Grade B";
    }else{
        cout << "Grade C";
    }
    return 0;
}