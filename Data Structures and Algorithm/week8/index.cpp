#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
// using namespace std;
// int main() {
//     int b; cin >> b;
//     int i = 1;
//     while(i*log10(i) <= log10(b)) {
//         if(i*log10(i) == log10(b)) {
//             cout << i << "yes";
//             break;
//         }
//         i++;
//     }
// }
// #include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    for(int i=0; i<test; i++){
        string str;
        // int size;
        // cin >> size;
        cin>> str;
        int x=0;
        
        for(int i=0; i < str.size(); i++){
           
            if (str[i]=='0' || str[i]=='5'){
                cout <<"yes"<< endl;
                x =1;
                break;
            }
            
        }
        if(x==0) cout << "no" << endl;
        
    }

}