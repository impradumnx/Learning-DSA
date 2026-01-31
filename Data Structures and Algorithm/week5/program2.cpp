// sorting in descending order

#include<iostream>
#include<algorithm>
using namespace std;
bool compare ( int i, int j){
    return(i>j);
}
int main(){ 
    int arr[] = {23, 18, 72, 45, 87, 67, 56};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size, compare);
    cout << "sorted array :";
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}