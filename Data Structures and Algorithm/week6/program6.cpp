#include<iostream>
using namespace std;

int sum(int x, int y){
    return (x+y);
}
double sum(double x, double y){
    return (x+y);
}
int main(){
    int a = 10, b =20;
    double c = 10.2, d = 20.2;
    
    int p = sum(c, d);
    double q = sum(c, d);
    cout << q;
    return 0;
}