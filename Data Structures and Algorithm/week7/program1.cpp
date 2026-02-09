#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printArray(vector<int> arr){
    for( auto x : arr){
        cout << x << " ";
    }
}
int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements : " << endl;
    for(int i=0; i<n; i++){
        cout << "Enter arr[" << i << "] : " ;
        cin >> arr[i];
    }
    cout << "Given array : ";
    printArray(arr);

    sort(arr.begin(), arr.end());
    
    cout << endl << "sorted array : ";
    printArray(arr);
    
    return 0;
}