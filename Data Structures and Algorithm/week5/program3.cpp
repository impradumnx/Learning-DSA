// binary search using C++ STL

#include<iostream>
#include<algorithm>
using namespace std;

int main (){
    int arr[] = {23, 18, 72, 45, 87, 67, 56};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 18;
    sort(arr, arr+size);
    if(binary_search(arr, arr+size, key)){
        cout << "Found!";
    }else{
        cout << "Not found!";
    }
    return 0;
}