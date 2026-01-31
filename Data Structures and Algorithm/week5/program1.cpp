// sorting in ascending order

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {23, 18, 72, 45, 87, 67, 56};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size);
    cout << "sorted array :";
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}