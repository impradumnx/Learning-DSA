// Program to convert a Decimal number to Binary number

#include<iostream>
using namespace std;

int decTobi(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;  // Binary form 
}
int main(){
    int num;
    cout << "Enter a decimal number : ";
    cin >> num;
    for(int i=1; i <= num; i++){
        cout << decTobi(i) << endl;
    }
    return 0;
}    