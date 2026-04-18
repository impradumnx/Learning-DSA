#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(5);
    q.push(1);
    q.push(8);
    q.push(6);
    cout << q.size() << endl;
    q.pop();
    cout << q.front() << " " << q.back() << endl;
    cout << q.size() << endl;

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}