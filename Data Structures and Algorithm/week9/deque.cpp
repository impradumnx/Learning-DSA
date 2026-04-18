#include<iostream>
#include<deque>
using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int> dq;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        dq.push_back(x);
    }
    dq.push_front(18);
    dq.push_back(45);
    for(int i=0; i<dq.size(); i++){
        cout << dq[i] << " " ;
    }
    cout << dq[1] << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    return 0;
}