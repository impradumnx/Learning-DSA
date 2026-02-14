#include<iostream>
using namespace std;
class point{public:
    int x,y;
};
class rect{public:
    point TL;
    point BR;
};
int main(){
    rect r = {{0,2}, {5,7}};
    cout << "[(" << r.TL.x  <<"," << r.TL.y <<") (" << r.BR.x << "," << r.BR.y << ")]";
    return 0;
}