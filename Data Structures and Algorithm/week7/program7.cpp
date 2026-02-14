#include<iostream>
#include<cmath>
using namespace std;
class point{public:
    int x;
    int y;
};
class rect{public:
    point tl;
    point br;

    void area(){
        cout << abs(tl.x - br.x)*abs(br.y - tl.y);
    }
};
int main(){
    rect r = {{0,2},{5,7}};
    cout << "the area of the rectangle is : ";
    r.area();
    return 0;
}