// size and capacity of a vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> value; // initial size = 0 
    
    value.push_back(1);
    value.push_back(8);
    value.push_back(3);

    cout << "size = " << value.size() << endl; // 3
    cout << "capacity = " << value.capacity() << endl; // 4
    return 0;
}