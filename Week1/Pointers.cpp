// Program 1

#include<iostream>
using namespace std;
// void changeA(int* ptr){
//     *ptr = 20;
// }
// int main(){
//     int a = 10;
//     changeA(&a);
//     cout << "Inside main function : " << a <<  endl;
//     return 0;
// }

// Pragram 2
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int* ptr1;
//     int* ptr2;
//     cout << ptr1 << endl;
//     cout << ptr2 << endl;
//     cout << (ptr1>ptr2) << endl;
//     return 0;
// }

// Program 3
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr1;
    int* ptr2 = ptr1;
    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << (ptr1 == ptr2) << endl;
    return 0;
}