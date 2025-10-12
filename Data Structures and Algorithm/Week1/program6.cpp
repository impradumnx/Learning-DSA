#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = 0;
    for(int count = 1; count <= n; count += 2){
        sum += count;
    }
    cout << "The sum of all odd numbers : " << sum;
    return 0;
}