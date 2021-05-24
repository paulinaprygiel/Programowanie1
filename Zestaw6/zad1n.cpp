#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int* p = new int [n];

    for ( int i=0;i<n;i++)
    {
        p[i] = pow(2,i);
        cout<<p[i]<< ' ';

    }





    return 0;
}


