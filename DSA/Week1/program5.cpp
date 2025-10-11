// Conditional statement using ternary operators

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    (ch >= 65 && ch <= 90)? cout <<"Uppercase" : cout <<"Lowercase" ;
    return 0;
}