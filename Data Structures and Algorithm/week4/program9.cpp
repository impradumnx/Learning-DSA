#include<iostream>
#include<stack>
#include<cctype>

using namespace std;

int main(){
    char postfix[] = {'1', '2', '3', '*', '+', '4', '-'};
    char ch;
    stack<int> s;
    int size = sizeof(postfix)/sizeof(postfix[0]);
    for(int i=0; i < size; i++){
        ch = postfix[i];
        if(isdigit(ch)){
            s.push(ch - '0');
        }
        else{
            int op1 = s.top();
            s.pop();
            int op2 = s.top();
            s.pop();
            switch (ch)
            {
            case '*' : s.push(op2 * op1);
                       break;
            case '/' : s.push(op2 / op1);
                       break;
            case '+' : s.push(op2 + op1);
                       break;
            case '-' : s.push(op2 - op1);
                       break;
            }
        }
    }
    cout << " Evaluation : " << s.top();
    return 0;
}