#include <iostream>
using namespace std;

int main()
{
    double x,y;
    cin >> x >> y;
    if (y==1 && -2<x && x<2)
        cout <<"YES";
    else if (y==-1 && -2<x && x<2)
        cout <<"YES";
    else if (x==0 && y==0)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}