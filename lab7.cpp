#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {

    double x;
    cin >> x;
    
    vector<int> a = {1, 4, 3, 2, 6, 5};

    long long s = 1; 
    for (int i : a) {
        s *= i;
    }

    cout << log(x) + sqrt(s) << endl;

    return 0;
}