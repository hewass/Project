#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double S = 0.0;
    int i = 1;
    double d = 1.0;

    while (i <= 15) {
        double num = pow(-1.0, i + 5) * (6.0 * i * i + 1.0);
        double den = 7.0 * i * i + 2.0 * i + 4.0;
        double term = (num / den);

        S += term;
        d *= term;

        cout << "n = " << i << " a = " << fixed << setprecision(4) << S << endl;
        
        i++;
      
    }
    
    

    return 0;
}