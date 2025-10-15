//  program to count number of digits.
#include<iostream>
using namespace std;

int counter(int n){

   int count = 0;
    while(n>0){

        n = n/10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    cout << counter(n);
}