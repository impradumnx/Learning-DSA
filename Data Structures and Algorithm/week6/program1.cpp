#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << "Final array : ";
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }
    for(int x:arr){
        cout << x << " ";
    }
    int size = arr.size();
    cout << endl << "size of array : " << size;
    return 0;
}