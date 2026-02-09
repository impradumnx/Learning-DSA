#include<iostream>
using namespace std;
#define square(x) x*x
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << " The square of the given number is : " << square(n);
    return 0;
}