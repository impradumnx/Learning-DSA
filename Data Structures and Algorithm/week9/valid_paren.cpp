#include<iostream>
#include<stack>
//#include<string>
using namespace std;
bool isValid (string str){

    stack<char> s;
    
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            if (s.empty()){
                return false;
            }
            char top = s.top();
            if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')){
              s.pop();
            } 
            else {
              return false;
            }  
        }

    }
    return s.empty();
}
int main (){

    string str;
    cout << "enter a string : ";
    cin >> str;
    
    if (isValid(str)){
        cout << " valid ";
    }else{
        cout << "invalid";
    }
    


    return 0;
}