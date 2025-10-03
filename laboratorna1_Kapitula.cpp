#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);

    double num = sqrt(fabs(x - 1)) - cbrt(fabs(y));
    double den = 1 + (x*x)/2 + (x*x)/4;

    double m = num / den;

    printf("m = %.3lf\n", m);

    return 0;
}