#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

double solve() {
    const int n = 15; 
    vector<double> a(n);
    
    a[0] = 1.0;
    a[1] = 1.0;

    int i = 2;
    while (i < n) { 
        a[i] = a[i-2] + a[i-1] / pow(2.0, i - 1);
        i++;
    }
    
    double product = 1.0;
    int k = 0;
    while (k < n) {
        product *= a[k];
        k++;
    }
    
    return product;
}

