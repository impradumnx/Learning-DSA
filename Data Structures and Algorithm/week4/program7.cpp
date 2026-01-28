// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     char data[] = {'s', 'e', 't', 'f', 'a'};
//     char key = 'o';
//     int size = sizeof(data)/sizeof(data[0]);

//     sort(data, data+size);
//     binary_search(data, data+size, key);
    
//     if(binary_search(data, data+size, key)){
//         cout << "item found";
//     }else{
//         cout << "item not found";
//     }
//     return 0;
// }
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = { 23, 54, 12, 87, 03, 18, 70, 99, 43};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 18;
    sort(arr, arr + size);
    if(binary_search(arr, arr+size, key)){
        cout << "Element found";
    }else{
        cout <<"Element not found";
    }
    cout << endl << "Sorted array : ";
    for(int i=0; i <  size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}