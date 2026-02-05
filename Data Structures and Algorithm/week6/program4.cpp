#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int arr[] = {18, 87, 63, 90, 34};
     int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size);
    for(auto x : arr){
        cout << x << " ";
    }
    
    return 0;
}