#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int x; cin >> x;
    vector<int> arr(n);
    int sum = 0; 
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) {
        if(arr[i] > x) {
            sum += arr[i];
        }
    }
}