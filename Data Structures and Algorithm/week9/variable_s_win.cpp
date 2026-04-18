#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int sum =0, left =0, right;
    int sub_length, max_length;
    
    for(right = 0; right<n; right++){
        sum += arr[right];
        if(sum > k){
            while(sum > right){
                sum -= arr[left];
                left ++;
            }
            sub_length = (right-left+1);
            if(sub_length > max_length){
                max_length = sub_length;
            }
        }

    }
    cout << max_length;
    return 0;
}