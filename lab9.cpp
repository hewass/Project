#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m, n;

    cout << "rows (m): ";
    cin >> m;
    cout << "columns (n): ";
    cin >> n;

    int** a = new int*[m];
    for (int i = 0; i < m; ++i) {
        a[i] = new int[n];
    }

    cout << "elements : " << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    double sum_neg = 0.0;
    int count_neg = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] < 0) {
                sum_neg += a[i][j];
                count_neg++;
            }
        }
    }

        double average = sum_neg / count_neg;
        
        cout << fixed << setprecision(2); 
        cout << "Average : " << average << endl;

    for (int i = 0; i < m; ++i) {
        delete[] a[i];
    }
    delete[] a;
    
    return 0;
}