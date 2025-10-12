#include<iostream>
using namespace std;

int sumofdigits(int num){
    int sumofdigits = 0;
    while(num > 0){
        int lastdigit = num%10;
        num /= 10;
        sumofdigits += lastdigit;
    }
    return sumofdigits;
}
int  main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    cout << "sum of digits of given number : " << sumofdigits(n);
}