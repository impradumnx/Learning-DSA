#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    int count;
    while(t--){
        count =0;
        string s;
        cin>>s;
        vector<int> arr( s.size() );
        // your code goes here
        string v="aeiou";
        for(int i=0; i<s.size(); i++){
            if (count>2){
                break;
            }
            for (int j=0; j<5; j++){
                if(s[i]==v[j]){
                    arr[i]=1;
                    break;
                }
            }
            
        }
        for(int i=0; i<s.size(); i++){
           if(count<3){
                if (arr[i]==1){
                count++;
                }
                else count=0;
           }
        }
        if(count>2){
            cout << "happy"<< endl;
        }else cout << "sad"<< endl;
    }

}