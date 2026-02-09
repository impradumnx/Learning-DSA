#include<iostream>
#include<vector>
#include<algorithm>
// #include<ctype>
using namespace std;
 void printArray(vector<int> arr){
    for(int x : arr){
        cout << x << " ";
    }
}

int main(){
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter array elements : ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int choice;
    cout << "1-(for sorting), 2-(for replace), 3-(for rotate)" << endl << "Enter choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        sort(arr.begin(), arr.end());
        cout << "Sorted array : ";
        printArray(arr);
        break;
    
    case 2:
        int oldElement, newElement;
        cout << "Enter the element to replace : ";
        cin >> oldElement;
        cout << "Enter the new element : ";
        cin >> newElement;
        replace(arr.begin(), arr.end(), oldElement, newElement);
        cout << "Array after replacement : ";
        printArray(arr);
        break;
    case 3: 
        int start, end;
        cout << "Enter starting Position : ";
        cin >> start;
        cout << "Enter ending Position : "; 
        cin >> end;
        rotate(arr.begin(), arr.begin()+start, arr.end()+end );
        break;

        
    default:
        cout << "Invalid choice!";
        break;
    }


    return 0;
}