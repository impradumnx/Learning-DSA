#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;
int main(){
    
    // creation of unordered map
    unordered_map <string, int> m;
    // insertion of data
    m["hello"]=4;
    m["world"]=5;
    
    cout << m["hello"] << endl;
    cout << m["hey"] << endl; // created  key->"hey" with vlaue '0'
    cout << m.at("hey") << endl; // without upper line this will give 'out_of_range' exception
    cout << m.size() << endl; // to check the total number of <key,value> pair 
    cout << m.count("world") << endl; // prints '1' if the <key,value> pair is present, '0' if not 
    m.erase("hello");
    cout << m.size() << endl;

    // for each loop to iterate the <key,vlaue> pair in the map 
    for(auto i:m){
        cout << i.first <<" "<< i.second << endl;
    } 

    // creating the iterator for the map to do the same work that for each loop is doing 
    unordered_map <string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}
