#include <iostream>
using namespace std;

int bubblesort(int arr[], int n){   // bubble sorting the array
    for(int i = 0; i < n-1; i++){
        for(int j=0; j < n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main (){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++ ){ // array elements input from user
        cin >>  arr[i];
    }

    bubblesort(arr, size); 

    cout << "sorted array - "; // Printing the sorted array
    for(int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }
}
