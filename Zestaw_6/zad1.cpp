#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *A;
    A= new int [n];

    for ( int i=0;i<n;i++)
    {
        A[i] = pow(2,i);
        cout<<A[i]<< ' ';

    }
    delete [] A;

    return 0;
}

