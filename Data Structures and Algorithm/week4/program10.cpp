#include<iostream>
#include<string>
#define glue(a,b) a ## b 
using namespace std;
int main(){
    string str1 = "Java";
    string str2 = "Script";
    cout << glue(str1,str2);
    glue(c,out) << "hello";
}