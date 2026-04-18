#include<iostream>
#include<vector>
using namespace std;

int main(){

    int s;
    cout << " Enter the size of array  : ";  
    cin >> s;
    int odd_count_pre = 0, odd_count_max = 0;

    vector<int> arr(s);
    for(int i=0; i<s; i++){
        cin >> arr[i];
    }
    cout << "Enter the window size : ";
    int k;
    cin >> k;
    for(int i=0; i<k; i++){
        if(arr[i]%2 != 0){
            odd_count_pre ++;
        }
    }
    odd_count_max = odd_count_pre;

    for(int i=k; i<s; i++){
        if(arr[i]%2 != 0){
            odd_count_pre ++;
        }
        if(arr[i-k]%2 != 0){
            odd_count_pre --;
        }
        // if(odd_count_pre > odd_count_max){
        //     odd_count_max = odd_count_pre;
        // }
        odd_count_max = max(odd_count_pre,odd_count_max);
    }
    cout << "max odd count : " << odd_count_max << endl;
    return 0;
}
