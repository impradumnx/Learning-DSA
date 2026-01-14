// selection sort 
#include<iostream>
using namespace std;
int selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 1+i; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){

    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int arr[size];
    cout << "Enter array elements : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    selectionSort(arr, size);

    cout << "Sorted array : ";
    cout << "Enter array elements : ";
    for(int i = 0; i < size; i++){
        cout <<" " << arr[i];
    }
    
    return 0;
}