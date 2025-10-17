#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    bool up = (y >= 0 && y <= 1 && y >= fabs(x));
    bool down = (y <= 0 && y >= -1 && y <= -fabs(x));

  
    return 0;
}
