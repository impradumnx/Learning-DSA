#include<iostream>
using namespace std;
int main (){
    int arr[] = {-45, 5, -18, 5, 0, 5, 6,};
    int smallest = arr[0];
    for(int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
      smallest = min(arr[i], smallest);
    }
    cout << "the smallest number is " << smallest ;
    return 0;
}