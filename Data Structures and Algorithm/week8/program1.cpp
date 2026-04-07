#include<iostream>
using namespace std;
int main(){
    int arr[] = {12, 7, 21, 45, 4, 9, 56, 34};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key=11;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size-1; j++){
            if(key==arr[i]+arr[j]){
                cout << i << " " << j;
            }
        }        
    }
    return 0;
}