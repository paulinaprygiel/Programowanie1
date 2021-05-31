#include <iostream>
#include <cmath>
using namespace std;
void root (double* x)
{
    int a;
a = sqrt(*x);
cout << a;
}


int main ()
{
    double y;
    cin >> y;
    root (&y);

    return 0;
}