#include<iostream>
#include<vector>
using namespace std;

int main(){

    int s;
    cin >> s;
    int curr_sum = 0, max_sum = 0;

    vector<int> arr(s);
    for(int i=0; i<s; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int flag;

    for(int i=0; i<k; i++){
        if(arr[i]<0){
            flag = arr[i];
            cout << flag << " ";
        }
        // curr_sum += arr[i];
        // max_sum = curr_sum;
    }
    for(int i=k; i<s; i++){
        curr_sum += arr[i];
        curr_sum -= arr[i-k]; 
        if(curr_sum>max_sum){
            max_sum = curr_sum;
        }
    }
    cout << " max sum : " << max_sum << endl;
    return 0;
}
