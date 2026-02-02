#include<iostream>
using namespace std;
int main(){
    
    // int n = 18;
    // int *p = &n;
    // *p = 19;
    const int m = 12;
    const int *p = &m;
    cout << *p << " " << m;
    return 0;
}