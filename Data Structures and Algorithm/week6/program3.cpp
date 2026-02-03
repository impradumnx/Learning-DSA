#include<iostream>
#include<cstring>
using namespace std;
void changeN(int &n){
    n = 18;
}
int main(){
    
    int n = 12;
    int *ptr = &n;
    int **ptr2 = &ptr;
    changeN(n);
    cout << *(&n) << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl;
    return 0;
}