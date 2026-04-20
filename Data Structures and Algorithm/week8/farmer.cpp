#include<iostream>
using namespace std;
int main(){
    int test;
    cin>> test;
    for(int i=0; i<test; i++){
        int x,n;
        cin >> x;
        cin >> n;
        if(n%2 ==0){
            cout << 0 << endl;
        }
        else {
            cout << x << endl;
        }
    
    }
    return 0;
}