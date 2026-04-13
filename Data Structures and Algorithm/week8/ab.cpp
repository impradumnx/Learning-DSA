#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    bool found = false;
    for(int i = 1; i < s.size(); i++) {
        if((s[i-1] == 'a' && s[i] == 'b') || (s[i-1] == 'b' && s[i] == 'a')) {
            cout << "yes";
            found = true;
            break;
        }
        if(!found) cout << "no";
    }
}