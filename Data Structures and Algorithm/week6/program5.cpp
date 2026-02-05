#include<iostream>
using namespace std;
int add(int a = 0){
    return a ;
}
int add(int a = 0, int b = 0){
    return a+b-1;
}
int add(int a = 0, char c ='a'){
    return a+c-1;
}
int add(char c = 'z', int a = 0){
    return a+c;
}
int main(){
    int c = add(10, 50);
    cout << endl;
    return 0;
}