// replacing the element of an array using C++ STL

#include<iostream>
#include<algorithm>
using namespace std;

int main (){
    int arr[] = {23, 18, 72, 45, 87, 67, 56};
    int size = sizeof(arr)/sizeof(arr[0]);
    int startPos;
    int endPos;
    cout << "Current array : ";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the Position upto which the elements should be rotated : ";
    cin >> startPos;
    cout << "Enter the position after which the rotated elemnts should be placed : ";
    cin >> endPos;
    rotate(arr, arr+startPos, arr+endPos);
    cout << "Updated array : ";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}