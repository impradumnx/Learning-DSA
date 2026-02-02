#include<iostream>
#include<string>
using namespace std;
int compareString(string s1, string s2){
    if (s1.length() < s2.length()){
        return -1;
    }else if(s1.length() == s2.length()){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    string str1 = "pradum";
    string str2 = "pratiksha";
    int value = compareString(str1, str2);
    if (value == -1){
        cout << "string 1 is less than string 2";
    }else if (value == 0){
        cout << "stirng 1 is equal to string 2";
    }else {
        cout << "string 1 is larger than string 2";
    }
    return 0;
}