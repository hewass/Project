#include <iostream>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    if (x>y && y>0)
        z = (x**x)-(y**y);
    else if (x>y && y<0)
        z = x*y;
    else if (x<y && y>0)
        z = x+y
    else 
        z = x;
        
    cout << z << endl;

    return 0;
}