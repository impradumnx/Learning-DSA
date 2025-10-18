#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> numbers = {3, 54, 18, 6, 43, 90};
    for(int &num : numbers){
        num += 2;
    }
    for (int num : numbers){
        cout << num << " ";
    }
    return 0;
}