// Calculate nCr bionomial coefficient for n & r 

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *=i;
    }
    return fact;
}
int  main(){
    
    int n, r;
    cout << "enter n : ";
    cin >> n;
    cout << "enter r : ";
    cin >> r;
   
    int binomialCo = ( factorial(n) / ( factorial(r)*factorial(n-r) ));
    cout << "Binomial coefficient : " << binomialCo ;
}