#include<iostream>
#include<vector>
using namespace std; 

int main(){

    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        
        int size;
        cin >> size;
        int k;
        cin >> k; // special value
        vector<int> arr(size);
        int sum=0;
        int flag =1;
        for(int i=0; i<size; i++){
            cin >> arr[i];
            sum += arr[i];
            if(arr[i] == arr[i+1] == k){
                flag+=1;
            }
        }
        if(flag == 5){

        }

    }
    return 0;
}
