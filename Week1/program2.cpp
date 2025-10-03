// To check wheather a number is prime or not

#include<iostream>
using namespace std;
int main (){

    int n;
    cout << "Enter a number : ";
    cin >> n;
    int prime = 0;

    if(n<=1){
        prime = 1;
    }
    else {
        for(int i = 2; i*i <= n; i++){
            if(n%i== 0){
                prime = 1;
                break;
            }
        }
    }
    if(prime == 0){
        cout << n <<" is a prime number.";
    }
    else {
        cout << n << " is a not a prime.";
    }
    return 0;
}