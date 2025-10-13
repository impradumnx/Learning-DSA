// finding the location of a number in 1D array using Lenear search 

#include<iostream>
using namespace std;
int linearsearch( int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {4, 6, 0, 34 , 56, 18, 3};
    int size = 7;
    int target = 18;
    cout << "Targeted element found on index : " << linearsearch( arr, size, target);
    return 0;
}