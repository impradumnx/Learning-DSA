#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string str = "pradum";
    stack<char> s;
    for(int i=0; i < str.length(); i++){
        s.push(str[i]);
    }
    cout << "Reversed string : ";
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    return 0;
}