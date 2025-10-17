// to print all the elements of vector.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> value; // initial size = 0 
    
    value.push_back(1);
    value.push_back(8);
    value.push_back(3);
    value.push_back(0);
    value.push_back(4);
    value.push_back(2);
   value.pop_back(); // to delete the last element
   for(int val : value){
    cout << val << " ";
   }
   cout << endl;

return 0;
}