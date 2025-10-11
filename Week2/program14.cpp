#include<iostream>
using namespace std;
int main (){
    int a, b;
    cout << "enter num 1 : ";
    cin >> a;
    cout << "enter num 2 : ";
    cin >> b;
    cout << "bitwise '&' of given numbers = " << (a & b) << "\n";
    cout << "bitwise '|' of given numbers = " << (a | b) << "\n";
    cout << "bitwise '^' of given numbers = " << (a ^ b) << "\n";
    cout << "bitwise '<<' of given numbers = " << (a << b) << "\n";
    cout << "bitwise '>>' of given numbers = " << (a >> b) << "\n";
    return 0;
}