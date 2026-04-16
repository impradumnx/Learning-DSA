#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> nge(n);
    stack<int> st;

    // traverse from right
    for (int i = n - 1; i >= 0; i--) {

        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (st.empty()) nge[i] = -1;
        else nge[i] = st.top();

        st.push(arr[i]);
    }

    // print result
    for (int i = 0; i < n; i++) {
        cout << nge[i] << " ";
    }

    return 0;
}