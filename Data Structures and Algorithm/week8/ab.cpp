#include <iostream>
#include <vector>
using namespace std;
int main(){

     int t;
     cin >> t;

    for(int i=0; i<t; i++){
    int size;
    cin >> size;
    vector<int>arr(size);
        for(int i=0; i<size; i++){
            cin >> arr[i];
        }
        int temp =0;
        for (int i=0; i<size; i++){
            if (arr[i]>temp){
                temp = arr[i];
            }
        }
        cout << temp*size << endl;


    }


    return 0;
}


// int main() {
//     string s; cin >> s;
//     bool found = false;
//     for(int i = 1; i < s.size(); i++) {
//         if((s[i-1] == 'a' && s[i] == 'b') || (s[i-1] == 'b' && s[i] == 'a')) {
//             cout << "yes";
//             found = true;
//             break;
//         }
//         if(!found) cout << "no";
//     }
// }