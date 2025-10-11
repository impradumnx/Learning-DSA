#include<iostream>
using namespace std;

int sumof2(int a, int b){
    int s = a+b;
    return s;
}
int min(int a, int b){
    if(a<b){
        return a;
    }else return b;
}
int max(int a, int b){
    if(a>b){
        return a;
    }else return b;
}
int main(){
    int a, b;
    cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the value of b : ";
    cin >> b;
    
    cout << "sum of two numbers = " << sumof2(a, b) << "\n";
    cout << "min of two numbers = " << min(a, b) << "\n";
    cout << "max of two numbers = " << max(a, b) << "\n";
    return 0;
}