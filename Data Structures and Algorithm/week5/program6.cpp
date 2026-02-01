
#include<iostream>
#include<algorithm>
using namespace std;

int main (){
    int arr[] = {23, 18, 72, 45, 87, 67, 56};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(&arr[2], &arr[6]);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}