#include<iostream>
using namespace std;

class stack{public:
    char data[100];
    int top;

    bool empty(){
        return (top == -1);
    }
    char top_(){
        return data [top];
    }
    void push(char x){
        data[++top] = x;
    }
    void pop(){
        --top;
    }
};
int main(){
    stack s;
    s.top = -1;
    char str[10] = "ABCDE";
    for(int i=0; i<5; ++i) s.push(str[i]);
    cout << "reverse string : "; 
    while(!s.empty()){
        cout << s.top_();
        s.pop();
    }
    return 0;
}
