#include<iostream>
using namespace std;

class complex{ public:
    double x, y, z;
};
int main(){
    complex c = {2.5, 5.3, 18.1};
    cout << c.x << " " << c.y << " " << c.z;
    return 0;
}