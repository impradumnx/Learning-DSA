// replacing the element of an array using C++ STL

#include<iostream>
#include<algorithm>
using namespace std;

int main (){
    int arr[] = {23, 18, 72, 45, 87, 67, 56};
    int size = sizeof(arr)/sizeof(arr[0]);
    int oldValue;
    int newValue;
    cout << "Current array : ";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the element to replace : ";
    cin >> oldValue;
    cout << "Enter the new value : ";
    cin >> newValue;
    replace(arr, arr+size, oldValue, newValue);
    cout << "Updated array : ";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}